#include <stdio.h>
#include <iostream>

struct node{

	int num;
	struct node *prox;
};

node *cria_fila(node *inicio,node *fim){

	int len,i;
	
	printf("\nNumero de elementos da lista: ");
	scanf("%i",&len);
	
	i=0;
	
	while(i<len){
		node *novo = new node();
		
		printf("\nElemento a inserir: ");
		scanf("%i",&novo->num);
		
		novo->prox=NULL;
		
		if(inicio==NULL){
			inicio=novo;
			fim=novo;
		}
		else{
			fim->prox=novo;
			fim=novo;
		}
		
		i++;
	}
	
	return inicio;

}

void func(node *inicio){

	int i=0,maior=0,menor=inicio->num;;
	float media=0;
	node *aux;

	aux=inicio;

	while(aux!=NULL){

		media+=aux->num;
		i++;

		if(aux->num>=maior)
			maior=aux->num;

		if(aux->num<=menor)
			menor=aux->num;

		aux=aux->prox;
	}

	media=media/i;

	printf("\nMedia: %f\nMaior: %i\nMenor: %i",media,maior,menor);
}

int main(void){

	node *inicio,*fim,*aux;
		
	inicio=fim=NULL;
	
	inicio=cria_fila(inicio,fim);
	
	aux=inicio;
	
	printf("\nFila: ");
	while(aux!=NULL){
		printf("%i ",aux->num);
		aux=aux->prox;
	}

	func(inicio);
	
	printf("\n");
	
	return 0;
}
