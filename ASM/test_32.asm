use16

start:
; очистка экрана
    mov ax,3
    int 10h

; открываем линию A20:
    in  al,92h
    or  al,2
    out 92h,al

mov ax, cs
mov ds, ax
mov es, ax

    mov eax, ENTRY_POINT
    mov [OFFSET],eax

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
    shr eax, 0x8
    mov [CODE_descr+3], al
    mov [CODE16_descr+3], al
    mov [CODE_descr+4], ah 
    mov [CODE16_descr+4], ah

; загрузка регистра GDTR
    lgdt    fword[GDTR]

    cli

    in  al,70h
    or  al,80h
    out 70h,al

; переключение в защищенный режим
    mov eax,cr0
    or  al,1
    mov cr0,eax

; загрузить новый селектор в регистр CS
jmp far fword[PTR32]
PTR32:
 OFFSET: dd 0 
 SELECTOR: dw 0x8
; глобальная таблица дескрипторов
align 8
GDT:
    NULL_descr   db 8 dup(0)
    CODE_descr   db 0xFF, 0xFF, 0x00, 0x00, 0x00, 10011010b, 11001111b, 0x00 ;код
    DATA_descr   db 0xFF, 0xFF, 0x00, 0x00, 0x00, 10010010b, 11001111b, 0x00 ;данные
    VIDEO_descr  db 0xFF, 0xFF, 0x00, 0x00, 0x0A, 10010010b, 01000000b, 0x00 ;видеосегмент
    CODE16_descr db 0xFF, 0xFF, 0x00, 0x00, 0x00, 10011010b, 00001111b, 0x00
GDT_size equ $-GDT

label GDTR fword
    dw GDT_size-1; 16-битный лимит GDT
    dd ? ; здесь будет 32-битный линейный адрес GDT

use32
ENTRY_POINT:

;загрузим сегментные регистры требуемыми селекторами
    mov ax,00010000b
    mov bx,ds ;номер сегмента кода режима реальных адресов
    mov ds,ax
    mov ax,00011000b
    mov es,ax

mov ax,18h
mov gs,ax

m1:
    mov cx, 0xFFFF
    mov di, 0x0
    lp:
        inc word[gs:di]
        inc di
    loop lp
jmp m1

jmp $

;нажатие любой клавиши