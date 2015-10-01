section .data
	msg:	db	0ah,"Digite um número: "
	msg_L:	equ	$-msg
	msg2:	db	0ah,"Soma dos numeros digitados: "
	msg2_L: equ	$-msg2
	lin: 	db	0ah,"------------------------------------",0ah
	lin_L:	equ	$-lin

section .bss
	num1: 	resb	4
	num2:	resb	4
	res:	resb	4

section .text
	global _start

_start:


	;; imprimir linha
	mov eax,4
	mov ebx,1
	mov ecx,lin
	mov edx,lin_L
	int 0x80

	;;; Imprimir msg na tela
	mov eax,4
	mov ebx,1
	mov ecx,msg
	mov edx,msg_L
	int 0x80

	;; Ler valor em num1
	mov eax,3
	mov ebx,0
	mov ecx,num1
	mov edx,4
	int 0x80

	;Imprimir msg na tela
	mov eax,4
	mov ebx,1
	mov ecx,msg
	mov edx,msg_L
	int 0x80
		

	;; Ler valor em num2
	mov eax,3
	mov ebx,0
	mov ecx,num2
	mov edx,4
	int 0x80


	mov eax,[num1] ;;valor de num1 para eax
	sub eax,'0'	;;transforma em numero


	mov ebx,[num2] ;;valor de num2 para ebx
	sub ebx,'0'	;;transforma em numero

	add eax,ebx	;;faz a soma (e coloca em eax)

	add eax,'0'	;;transforma em charactere (na tabela ascii)

	mov [res],eax	;;coloca a soma em res

	;;; Imprimir msg2 na tela
	mov eax,4
	mov ebx,1
	mov ecx,msg2
	mov edx,msg2_L
	int 0x80

	;; imprimir a soma
	mov eax,4
	mov ebx,1
	mov ecx,res
	mov edx,4
	int 0x80

	;; imprimir linha
	mov eax,4
	mov ebx,1
	mov ecx,lin
	mov edx,lin_L
	int 0x80

	mov eax,1
	mov ebx,0
	int 0x80
