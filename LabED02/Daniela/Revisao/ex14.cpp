#include <iostream>
#include <stdio.h>

struct node{
	int num;
	struct node *prox;
};

node *push(node *top){

	int cont,i=0;

	printf("\nQuantos numero deseja inserir: ");
	scanf("%i",&cont);

	while(i<cont){

		node *novo=new node();

		printf("\nNumero a inserir: ");
		scanf("%i",&novo->num);

		novo->prox=top;
		top=novo;

		i++;
	}

	return top;
}

node *pop(node *top){

	node *aux;

	aux=top;

	top=top->prox;

	delete aux;

	return top;
}

int main(void){

	node *top,*aux;

	top=NULL;

	top=push(top);

	aux=top;

	printf("\nPilha Inicial: ");
	while(aux!=NULL){
		printf("%i ",aux->num);
		aux=aux->prox;
	}

	top=pop(top);

	top=pop(top);

	aux=top;

	printf("\nPilha Final: ");
	while(aux!=NULL){
		printf("%i ",aux->num);
		aux=aux->prox;
	}

	printf("\n");

	return 0;
}
