format binary
use16

CODE_selector equ 8h
CODE_z_selector equ 10h
VIDEO_selector equ 18h
DATA_selector equ 20h
DATA_z_selector equ 28h
CODE16_selector equ 30h
CODE64_selector equ 38h
DATA64_selector equ 40h

start:

mov ax, cs
mov ds, ax
mov es, ax

; очистка экрана
    mov ax,3
    int 10h

; открываем линию A20:
    in  al,92h
    or  al,2
    out 92h,al
 
    mov eax, ENTRY_POINT
    mov [PTR32],eax

; вычисление линейного адреса GDT

xor eax, eax
mov ax, cs
mov [dos_jump + 2], ax

    xor eax,eax
    mov ax, ds
    shl eax,4
    add ax, GDT

; линейный адрес GDT кладем в заранее подготовленную переменную
    mov dword[GDTR+2], EAX

; вычисление линейного адреса GDT
    xor eax,eax
    mov ax,cs
    shl eax,4
    add ax, GDT

; линейный адрес GDT кладем в заранее подготовленную переменную
    mov dword[GDTR+2], EAX
   
    xor eax, eax
    mov ax , cs
    shl eax, 0x4
    mov [CODE_descr+2], al
    mov [CODE16_descr+2], al
    mov [DATA_descr+2], al

    shr eax, 0x8
    mov [CODE_descr+3], al
    mov [CODE16_descr+3], al
    mov [DATA_descr+3], al
    mov [CODE_descr+4], ah 
    mov [CODE16_descr+4], ah
    mov [DATA_descr+4], ah

; загрузка регистра GDTR
    lgdt    fword[GDTR]

cli
in al, 70h 
or al, 10000000b 
out 70h, al

mov eax, cr0
or al, 1
mov cr0, eax

jmp far fword[PTR32]
PTR32:
 dd 0 
 dw CODE_selector

;jmp CODE_selector:ENTRY_POINT

align 8
GDT:
    NULL_descr    db 8 dup(0)
    CODE_descr    db 0xFF, 0xFF, 0x00, 0x00, 0x00, 10011010b, 11001111b, 0x00
    CODE_z_descr  db 0xFF, 0xFF, 0x00, 0x00, 0x00, 10011010b, 11001111b, 0x00
    VIDEO_descr   db 0xFF, 0xFF, 0x00, 0x00, 0x0A, 10010010b, 01000000b, 0x00 ;видеосегмент
    DATA_descr    db 0xFF, 0xFF, 0x00, 0x00, 0x00, 10010010b, 11001111b, 0x00
    DATA_z_descr  db 0xFF, 0xFF, 0x00, 0x00, 0x00, 10010010b, 11001111b, 0x00
    CODE16_descr  db 0xFF, 0xFF, 0x00, 0x00, 0x00, 10011010b, 10001111b, 0x00
    CODE64_descr  db 0x00, 0x00, 0x00, 0x00, 0x00, 10011000b, 00100000b, 0x00
    DATA64_descr  db 0x00, 0x00, 0x00, 0x00, 0x00, 10010000b, 00100000b, 0x00
GDT_size equ $-GDT

label GDTR fword
    dw GDT_size-1; 16-битный лимит GDT
    dd ? ; здесь будет 32-битный линейный адрес GDT

PM_CODE_BASE_ADDRESS   equ 100000h ; 1Mb
;PM_CODE_SIZE equ PM_CODE_END - PM_CODE_START

;Защищенный режим
ENTRY_POINT:
use32
mov ax, DATA_selector
mov ds, ax
mov ax, DATA_z_selector
mov es, ax


; для адреса, тк меняется база
;call delta
;delta:
;pop ebx
;add ebx, PM_CODE_START-delta
;mov esi, ebx
;mov edi, PM_CODE_BASE_ADDRESS
;mov ecx, PM_CODE_SIZE
;rep movsb
;
;jmp CODE_z_selector:PM_CODE_BASE_ADDRESS
;
;PM_CODE_START:
;
;jmp continue
;;Tables addr

     PML4_addr equ 200000h ;корневая таблица, карта страниц 4 уровня
     PDPTE_addr equ 201000h
     PDE_addr  equ 202000h

;LM_addr equ PM_CODE_BASE_ADDRESS + LM_CODE_START - PM_CODE_START

continue:
;TABLES
mov edi, 0x200000
mov ecx, 0x6000
xor eax, eax
rep stosd ; mov eax to ES:EDI

mov eax, PDPTE_addr or 3
mov edi, PML4_addr
mov [es:edi], eax

mov eax, PDE_addr or 3
mov edi,PDPTE_addr 
mov ecx, 4
fill_pdpt:
   mov dword[es:edi], eax
   add eax, 0x1000
   add edi, 0x8
loop fill_pdpt

mov eax, 0x83
mov edi, PDE_addr
mov ecx, 4 
fill_all_pd:
   mov edx, ecx
   mov ecx, 512 ;512 страниц в 1 каталоге
   fill_one_pd:
       mov dword[es:edi], eax
       add eax, 0x200000; 2 mb
       add edi, 0x8; 1 element
   loop fill_one_pd
   mov ecx, edx
loop fill_all_pd
  
;включение long mode

mov eax, cr4
bts eax, 5 
mov cr4, eax

mov eax, PML4_addr
mov cr3, eax
mov   ecx, 0c0000080h
rdmsr
bts   eax, 8
wrmsr

mov eax, cr0
bts eax, 31
mov cr0, eax

xor eax, eax
mov ax , [dos_jump+2] ; берем  cs
shl eax, 0x04
add eax, LM_CODE_START
mov dword[PTR64], eax

; Jump to 64-bit
jmp fword[PTR64]

PTR64:
    dd 0x0
    dw CODE64_selector

;jmp CODE64_selector:LM_addr

use64
LM_CODE_START:
mov ax, 40h
mov ds, ax
mov es, ax
;include '15_LR3-2_PanferovaTV.asm'

xor rdi, rdi
xor rsi, rsi

mov ax,18h
mov gs,ax

m1:
    mov cx, 0xFFFF
    mov edi, 0x0
    lp:
        inc word[gs:edi]
        inc di
    loop lp
jmp m1

jmp tbyte[jump_value]

jump_value:
dq ret_protected
dw CODE_selector

ret_protected:
use32   

mov eax, cr0 
btc eax, 31 
mov cr0, eax 

mov ecx, 0c0000080h  
rdmsr 
btc eax, 8 
wrmsr 

mov eax, cr4
btc eax, 5 
mov cr4, eax


jmp CODE16_selector:ret_dos

ret_dos:    
use16

;выход из защищенного режима (16-битного)
mov eax, cr0
and al, 0xFE
mov cr0, eax

jmp dword[cs:dos_jump]

dos_jump:
dw back_realm
dw 0

;возврат в реальный режим
back_realm:
use16
    in  al,70h
    and al,7Fh
    out 70h,al
sti
mov ax, cs
mov ds, ax

mov ah,0
int 16h
int 0x20

;PM_CODE_END:
