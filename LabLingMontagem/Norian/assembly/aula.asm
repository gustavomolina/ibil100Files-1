
section .data
	msg:	 db	"Digite um numero: ",0ah  ; label msg recebe 1 byte "db" com conteudo "Digite um numero: " + 0x10 ("\n")
	msg_L:	 equ	$-msg	;pega o tamanho de msg

section .bss
	num:	resw 	1	;reserva 2 bytes
	vet: 	resw	5	;reserva 5 * word ( 10 bytes)

section .text 
	global _start:

_start:
	
	mov ebx,8
	mov ecx,0

.rep	push ebx
	push ecx

	mov eax,4 	;syscall write
	mov ebx,1 	;fd
	mov ecx,msg
	mov edx,msg_L
	int 0x80

	mov eax,3	 ;syscall read
	mov ebx,0	 ;fd
	mov ecx,num	 ;valiavel
	mov edx,2	 ;qtd, sempre em bytes
	int 0x80

	pop ecx
	pop ebx

	mov eax,[num]
	mov [vet+ecx],eax

	add ecx,2
	cmp ecx,ebx

	jne .rep

	mov ebx
.pr
	mov eax,1
	mov ebx,0
	int 0x80

	
