format binary
use16

CODE32_selector equ 8h
DATA32_selector equ 10h
CODE_z_selector equ 18h
DATA_z_selector equ 20h
VIDEO_selector equ 28h
CODE64_selector equ 30h
DATA64_selector equ 38h

start:

; очистка экрана
    mov ax,3
    int 10h

; открываем линию A20:
    in  al,92h
    or  al,2
    out 92h,al
 
 ;cs = 0x1000
    mov ax, cs
    mov ds, ax
    mov es, ax

    mov eax, PM_CODE_START
    mov [PTR32],eax

; вычисление линейного адреса PTR64
    xor eax, eax
    mov ax , ds ; берем  cs
    shl eax, 0x04
    add eax, LM_CODE_START
    mov dword[PTR64], eax

; вычисление линейного адреса GDT

    xor eax,eax
    mov ax, ds
    shl eax,4
    add ax, GDT

; линейный адрес GDT кладем в заранее подготовленную переменную
    mov dword[GDTR+2], EAX

   
    xor eax, eax
    mov ax , cs
    shl eax, 0x4
    mov [CODE32_descr+2], al
    mov [DATA32_descr+2], al

    shr eax, 0x8
    mov [CODE32_descr+3], al
    mov [DATA32_descr+3], al
    mov [CODE32_descr+4], ah 
    mov [DATA32_descr+4], ah

; загрузка регистра GDTR
    lgdt    fword[GDTR]

cli

in  al  , 0x70
or  al  , 0x80
out 0x70, al

; переключение в защищенный режим
mov eax, cr0
or al, 1
mov cr0, eax

jmp far fword[PTR32]
PTR32:
 dd 0 
 dw CODE32_selector

;jmp CODE_selector:ENTRY_POINT

align 8
GDT:
    NULL_descr    db 8 dup(0)
    CODE32_descr  db 0xFF, 0xFF, 0x00, 0x00, 0x00, 10011010b, 11001111b, 0x00
    DATA32_descr  db 0xFF, 0xFF, 0x00, 0x00, 0x00, 10010010b, 11001111b, 0x00

    CODE_z_descr  db 0xFF, 0xFF, 0x00, 0x00, 0x00, 10011010b, 11001111b, 0x00
    DATA_z_descr  db 0xFF, 0xFF, 0x00, 0x00, 0x00, 10010010b, 11001111b, 0x00
    
    VIDEO_descr   db 0xFF, 0xFF, 0x00, 0x00, 0x0A, 10010010b, 01000000b, 0x00 ;видеосегмент
    
    CODE64_descr  db 0x00, 0x00, 0x00, 0x00, 0x00, 10011000b, 00100000b, 0x00
    DATA64_descr  db 0x00, 0x00, 0x00, 0x00, 0x00, 10010000b, 00100000b, 0x00
GDT_size equ $-GDT

label GDTR fword
    dw GDT_size-1; 16-битный лимит GDT
    dd ? ; здесь будет 32-битный линейный адрес GDT

PM_CODE_BASE_ADDRESS   equ 100000h ; 1Mb
;PM_CODE_SIZE equ PM_CODE_END - PM_CODE_START

;Защищенный режим
PM_CODE_START:
use32
mov ax, DATA32_selector
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

jmp fword[PTR64]

PTR64:
    dd 0x0
    dw CODE64_selector

use64
LM_CODE_START:
mov ax, DATA64_selector
mov ds, ax
mov es, ax

xor rdi, rdi
xor rsi, rsi

mov ax,VIDEO_selector
mov gs,ax

mov rsp, 0x2000000
mov rax, 0x1500000
jmp rax

