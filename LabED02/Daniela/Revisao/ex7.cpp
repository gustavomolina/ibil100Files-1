#include <stdio.h>
#include <iostream>

struct node{

	int num;
	struct node *prox;
};

node *cria_lista(node *inicio,node *fim){

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

node *concat(node *inicio,node *inicio2){

	node *aux;
	
	aux=inicio;
	
	while(aux->prox!=NULL)
		aux=aux->prox;
	
	aux->prox=inicio2;
	
	return inicio;

}

int main(void){

	node *inicio,*fim,*aux;
	node *inicio2,*fim2,*aux2;
		
	inicio=fim=NULL;
	inicio2=fim2=NULL;
	
	inicio=cria_lista(inicio,fim);
	
	inicio2=cria_lista(inicio2,fim2);
	
	aux=inicio;
	
	printf("\nLista 1: ");
	while(aux!=NULL){
		printf("%i ",aux->num);
		aux=aux->prox;
	}
	
	inicio=concat(inicio,inicio2);
	
	aux2=inicio2;
	
	printf("\nLista 2: ");
	while(aux2!=NULL){
		printf("%i ",aux2->num);
		aux2=aux2->prox;
	}
	
	aux=inicio;
	
	printf("\nLista 3: ");
	while(aux!=NULL){
		printf("%i ",aux->num);
		aux=aux->prox;
	}
	
	printf("\n");
	
	return 0;
}	
