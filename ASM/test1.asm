format binary
use16

; очистка экрана
	mov	ax,3
	int	10h

; открываем линию A20:
	in	al,92h
	or	al,2
	out	92h,al
; cs = 0x1000

mov ax, cs
mov ds, ax
mov es, ax

mov eax, Start32
mov [OFFSET_32],eax

; вычисление линейного адреса GDT
    xor eax,eax
    mov ax,cs
    shl eax,4
    add ax, GDT
mov dword[GDTR+2], eax


    xor eax, eax
    mov ax , cs
    shl eax, 0x4
    mov [CODE_descr+2], al
    mov [DATA_descr+2], al
    shr eax, 0x8
    mov [CODE_descr+3], al
    mov [DATA_descr+3], al
    mov [CODE_descr+4], ah 
    mov [DATA_descr+4], ah

; загрузка регистра GDTR
lgdt	fword[GDTR]

cli

in  al  , 0x70
or  al  , 0x80
out 0x70, al

; переключение в защищенный режим
mov eax,cr0 
or al,1;устанавливаем 0-вой бит
mov cr0,eax;включаем PM
 
; загрузить новый селектор в регистр CS
jmp far fword[PTR32]
PTR32:
 OFFSET_32: dd 0 
 SELECTOR_32: dw 0x8

align 8 ;процессор быстрее обращается с выравненной табличкой
GDT:
    NULL_descr   db 8 dup(0)
    CODE_descr   db 0xFF, 0xFF, 0x00, 0x00, 0x00, 10011010b, 11001111b, 0x00 ;код
    DATA_descr   db 0xFF, 0xFF, 0x00, 0x00, 0x00, 10010010b, 11001111b, 0x00 ;данные
    VIDEO_descr  db 0xFF, 0xFF, 0x00, 0x00, 0x0A, 10010010b, 01000000b, 0x00 ;видеосегмент


label GDT_SIZE at $-GDT

label GDTR fword
    dw GDT_SIZE-1; 16-битный лимит GDT
    dd ? ; здесь будет 32-битный линейный адрес GDT

; нужно записать 32-битный адрес. Сейчас мы находимся в сегменте 1000h, база которого 1000h*10h (по ;физическому адресу) => физический адрес GDTR (метки!) = 10000h (физический адрес базы сегмента)+offset
 
;virtual ;теперь, фактически, забиваем пространство до конца сегмента
;rb 10000h-$;
;end virtual
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;PM32 Entry;;;;;;;;;;;;;;;;;;;
use32
;org $+10000h;вот для чего: в PM мы работаем с Flat-сегментами, и если мы оставим код ;для PM перед org’ом, то ;внутрисегментный адрес не будет совпадать с Flat адресом. Так вот.
 
Start32: ;точка входа в PM
mov ax,10h ;здесь пихаем селекторы. Зачастую (! не забываем про порядковый номер в 
mov es,ax ;таблице) селектор сегмент кода - 08h. данных - 10h, видеосегмент - 18h
mov ds,ax
;mov fs,ax
;mov ss,ax
;mov esp,10000h;стек
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
 
 