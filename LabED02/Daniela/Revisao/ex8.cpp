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

void busca(node *inicio){

	node *aux;
	int num;
	
	printf("\nNumero a ser buscado: ");
	scanf("%i",&num);
	
	aux=inicio;
	
	while(aux!=NULL && aux->num!=num)	
		aux=aux->prox;
		
	if(aux==NULL)
		printf("\nNumero nao pertence a lista!");
	else
		printf("\nNumero pertence a lista!");

}

int main(void){

	node *inicio,*fim,*aux;
		
	inicio=fim=NULL;
	
	inicio=cria_lista(inicio,fim);
	
	busca(inicio);
	
	printf("\n");
	
	return 0;
}	
