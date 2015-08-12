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

int busca(node *inicio,int num){

	if(inicio==NULL)
		return 0;
	else if(inicio->num==num)
		return 1;
	else
		return busca(inicio->prox,num);

}

int main(void){

	node *inicio,*fim,*aux;
	int num,acho;
		
	inicio=fim=NULL;
	
	inicio=cria_lista(inicio,fim);
	
	printf("\nNumero a ser buscado: ");
	scanf("%i",&num);
	
	acho=busca(inicio,num);
	
	if(acho==1)
		printf("\nNumero pertence a lista!");
	else
		printf("\nNumero nao pertence a lista!");
	
	printf("\n");
	
	return 0;
}
