//Rafael Stefanini Carreira
#include <stdio.h>
#include <stdlib.h>

typedef struct fila{
	int num;
	struct fila *prox;
}fila;


fila *inverte(fila *f)
{
	fila *pilha=NULL; //usar fila como pilha
	
	while(f) //empilhando elementos
	{
		fila *novo=(fila*)malloc(sizeof(fila));
		novo->num=f->num;
		novo->prox=pilha;
		pilha=novo;
		f=f->prox;
	}

	fila *inicio=NULL; //nova fila	
	fila *fim=NULL;
	fila *aux=NULL;

	fila *novo=(fila*)malloc(sizeof(fila));
	novo->num=pilha->num; //primeiro elemento
	novo->prox=NULL;
	inicio=fim=novo;
	pilha=pilha->prox;

	while(pilha) //demais elementos
	{
		fila *novo=(fila*)malloc(sizeof(fila));
		novo->num=pilha->num;
		novo->prox=NULL;
		fim->prox=novo;
		fim=novo;
		aux=pilha;
		pilha=pilha->prox;
		free(aux);
	}

	
	return inicio;	
}
main()
{
	fila *inicio=NULL;
	fila *fim=NULL;
	fila *aux=NULL;
	int num,op;

	while(1)
	{

		puts("\n-----------------------");
		puts("\n1 - Inserir");
		puts("\n2 - Remover");
		puts("\n3 - Imprimir");
		puts("\n4 - Inverter");
		
		scanf("%d",&op);
		
		puts("--------------------------");
		if(op==1)
		{
			printf("Digite um número: ");
			scanf("%d",&num);
			fila *novo=(fila*)malloc(sizeof(fila));
			novo->num=num;
			novo->prox=NULL;
			
			if(inicio==NULL)
			{
				inicio=novo;
				fim=novo;
			}
			else
			{
				fim->prox=novo;
				fim=novo;
			}
			puts("\nInserido com sucesso!\n");
		}
		
		else if(op==2)
		{
			if(!inicio)
				puts("\nFila vazia!\n");
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
		else if(op==4)
		{
				if(inicio)
				{
					inicio=inverte(inicio);
					aux=inicio;
					while(aux->prox) //ajustar o ponteiro fim
						aux=aux->prox;
					fim=aux;
				}
		}
		else
			puts("Operação Inválida!\n");
			
	}
}		

