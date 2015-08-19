#include <iostream>
#include <stdio.h>

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

node *ordem(node *inicio,node *fim){

	node *inicio2,*fim2,*aux2,*aux;

	inicio2=fim2=NULL;

	aux=inicio;
	node *ant2 = NULL;

	while(aux!=NULL){
		node *novo = new node();

		aux2=inicio2;
		
		novo->prox=NULL;

		novo->num=aux->num;
		
		if(inicio2==NULL){
			inicio2=novo;
			fim2=novo;
		}
		else{
			while(novo->num >= aux2->num){
				ant2=aux2;
				aux2=aux2->prox;
			}

			if(ant2==fim2){
				fim2->prox=novo;
				novo->prox=NULL;
				fim2=novo;
			}
			else if(aux2==inicio2){
				novo->prox=inicio2;
				inicio2=novo;
			}
			else{
				ant2->prox=novo;
				novo->prox=aux2;
			}
		}

		aux=aux->prox;
	}

	aux=inicio;
	aux2=inicio2;

	while(aux!=NULL){
		aux->num=aux2->num;
		aux=aux->prox;
		aux2=aux2->prox;
	}

	aux2=inicio2;

	while(aux2!=NULL){
		inicio2=inicio2->prox;
		delete aux2;
		aux2=inicio2;
	}

	return inicio;
}

int main(void){

	node *inicio,*fim,*aux;

	inicio=fim=NULL;

	inicio=cria_fila(inicio,fim);

	inicio=ordem(inicio,fim);

	aux=inicio;

	printf("\nFila: ");

	while(aux!=NULL){
		printf("%i ",aux->num);
		aux=aux->prox;
	}

	printf("\n");

	return 0;
}
