section .data
	msg:	 db	"Qual o seu nome?",0ah
	msg_L:	 equ	$-msg
	hi:	db	"Oi "
	hi_L:	equ	$-hi

section .bss
	nome	 resb	255 

section .text ;codigo
	global _start:

_start:

	mov eax,4 ;syscall write
	mov ebx,1 ;file descriptor (stdout)
	mov ecx,msg
	mov edx,msg_L
	int 80h

	mov eax,3 ;syscall read
	mov ebx,0 ;file descriptor (stdin)
	mov ecx,nome
	mov edx,255
	int 80h

	mov eax,4 ;syscall write
	mov ebx,1 ;file descriptor (stdout)
	mov ecx,hi
	mov edx,hi_L
	int 80h
	
	mov eax,4 ;syscall write
	mov ebx,1 ;file descriptor (stdout)
	mov ecx,nome
	mov edx,255
	int 80h


	mov eax,1
	mov ebx,0
	int 80h

