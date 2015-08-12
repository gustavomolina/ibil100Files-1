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

node *remove(node *inicio){

	node *aux;
	
	aux=inicio;

	if(inicio==NULL)
		printf("\nFila vazia!");
	else{
		inicio=inicio->prox;
		delete aux;
	}
	
	return inicio;
}

int main(void){

	node *inicio,*fim,*aux;
	int cont;
		
	inicio=fim=NULL;
	
	inicio=cria_fila(inicio,fim);
	
	printf("\nDeseja remover quantos elementos: ");
	scanf("%i",&cont);
	
	for(int i=0;i<cont;i++)
		inicio=remove(inicio);
	
	aux=inicio;
	
	printf("\nFila: ");
	while(aux!=NULL){
		printf("%i",aux->num);
		aux=aux->prox;
	}
	
	printf("\n");
	
	return 0;
}
