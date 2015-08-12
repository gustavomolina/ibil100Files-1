#include <stdio.h>
#include <iostream>

struct node{
	int num;
	struct node *prox;
};

void ler_vetor(int *v,int n){

	for(int i=0;i<n;i++){
		printf("\nElemento %i: ",i+1);
		scanf("%i",&v[i]);
	}
}

node *vec_to_list(int *v,int n,node *inicio,node *fim){

	int cont=0;

	while(cont<n){
		node *novo = new node();
				
		novo->num=v[cont];

		if(inicio==NULL){
			inicio=novo;
			fim=novo;
			novo->prox=NULL;
		}
		else{
			fim->prox=novo;
			fim=novo;
			fim->prox=NULL;
		}
		cont++;
	}

	return inicio;
}

int main(void){

	node *inicio,*fim,*aux;

	inicio=fim=NULL;

	int *v,n;

	printf("\nInforme o tamanho do vetor: ");
	scanf("%i",&n);

	v=new int[n];

	ler_vetor(v,n);

	inicio=vec_to_list(v,n,inicio,fim);

	aux=inicio;

	printf("\nLista: ");

	while(aux!=NULL){
		printf("%i ",aux->num);
		aux=aux->prox;
	}

	printf("\n");

	return 0;
}
