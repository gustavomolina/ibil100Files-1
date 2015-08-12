#include <stdio.h>
#include <stdlib.h>



typedef struct lista 
{
	int num;
	struct lista *prox;
}lista;


main()
{

	lista *inicio = NULL; 
	lista *fim = NULL;
	lista *aux;
	lista *anterior;

	int op, num;
	
	while(1)
	{
		puts("\n--------------------------");
		puts("1 - Inserir elemento");
		puts("2 - Remover elemento");
		puts("3 - Imprimir a lista");
		puts("4 - Sair\n>");
	
		scanf("%d",&op);

		//Inserir
		if(op==1)
		{
			puts("Digite um numero a ser inserido: ");
			scanf("%d",&num);
			
			lista *novo = (lista*)malloc(sizeof(lista));
			novo->num=num;
			if(inicio == NULL) //lista vazia
			{
				inicio = novo;
				fim = novo;
				fim->prox = NULL;
			}
			else
			{				//Lista n vazia
				novo->prox = inicio;
				inicio = novo;
			}
		}

		if(op==2) //remover elemento
		{

			if(inicio == NULL)
				puts("Lista vazia");
			else
			{
				puts("Elemento a ser removido: ");
				scanf("%d",&num);
				aux = inicio;
				anterior= NULL;

				printf("Elemento não encontrado!");

				while(aux != NULL)
				{
				
					if(aux->num == num)
					{
						if(aux==inicio)//primeiro da lista
						{
							inicio = inicio->prox;
							free(aux);
						}
						else if (aux==fim)//ultimo da lista
						{
							anterior->prox=NULL;
							fim=anterior;
							free(aux);
						}
						else//meio da lista
						{
							anterior->prox = aux->prox;
							free(aux);
					
						}
						printf("\rElemento removido com sucesso!");
						break;
					}
					else
					{
						anterior = aux;
						aux = aux->prox;
					}
				}
			}
		}

		
		if(op==3)//imprimir a lista
		{
			if(inicio==NULL)
				puts("Lista vazia");
			else
			{
				puts("------------------------------");
				aux=inicio;
				while(aux!=NULL)
				{
					printf(" %d --->",aux->num);
					aux=aux->prox;
				}
				printf(" NULL");
			}
		}

		if(op==4)
			break;
		if(op > 4 && op < 1)
			puts("Invalido!");
	}
}

