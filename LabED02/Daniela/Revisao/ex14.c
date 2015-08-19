//Rafael Stefanini Carreira
#include <stdio.h>
#include <stdlib.h>

typedef struct pilha{
	int num;
	struct pilha *prox;
}pilha;

main()
{
	pilha *inicio=NULL;
	pilha *aux=NULL;
	int num,op;

	while(1)
	{

		puts("\n-----------------------");
		puts("\n1 - Inserir");
		puts("\n2 - Remover");
		puts("\n3 - Imprimir\n\n>");
		
		scanf("%d",&op);
		
		if(op==1)
		{
			printf("Digite um número: ");
			scanf("%d",&num);
			pilha *novo=(pilha*)malloc(sizeof(pilha));
			novo->num=num;
			novo->prox=inicio;
			inicio=novo;
			
			puts("\nInserido com sucesso!\n");
		}
		
		else if(op==2)
		{
			if(!inicio)
				puts("\nPilha vazia!\n");
			else
			{
				aux=inicio;
				inicio=inicio->prox;
				free(aux);
				puts("\nRemovido com sucesso!\n");
			}	
		}
		
		else if(op==3)
		{
			aux=inicio;
			puts("--------------------------");
			while(aux)
			{
				printf(" %d --> ",aux->num);
				aux=aux->prox;
			}
				printf(" NULL\n");

			puts("--------------------------");
		}

		else
			puts("Operação Inválida!\n");
			
	}
}		

