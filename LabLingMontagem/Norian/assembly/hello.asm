section .data
	msg:	 db	"Hello world!",0ah
	msg_L:	 equ	$-msg

section .text ;codigo
	global _start:

_start:

	mov eax,4 ;syscall write
	mov ebx,1 ;file descriptor (stdout)
	mov ecx,msg
	mov edx,msg_L
	int 80h

	mov eax,1
	mov ebx,0
	int 80h
	
