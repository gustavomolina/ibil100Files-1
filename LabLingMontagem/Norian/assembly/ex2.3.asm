section .text
	global _start ;precisa declarer para o linker
_start:
	mov edx,len
	mov ecx,msg
	mov ebx,1
	mov eax,4
	int 0x80

	mov edx,500
	mov ecx,s2
	mov ebx,1
	mov eax,4
	
	int 0x80
	mov eax,1
	mov ebx,0
	int 0x80


section .data
	msg db 'Displaying 500 stars',0xa ;uma mensagem
	len equ $ - msg ;tamanho da mensagem
	s2 times 500 db '*'
