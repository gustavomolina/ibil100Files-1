//Rafael Stefanini Carreira
#include <stdio.h>
#include <stdlib.h>

int buscaS(int *v,int n, int num)
{
	int i;
	for(i=0;i<n;i++)
		if(v[i]==num)
			return 1;
	return 0;
}

main()
{
	int *v;
	int num,n,i;

	puts("Digite a quantidade de elementos do vetor");
	scanf("%d",&n);
	v=(int*)malloc(n*sizeof(int));
	
	puts("Digite os elementos do vetor");

	for(i=0;i<n;i++)
	{
		printf("\nv[%d]= ",i);
		scanf("%d",&v[i]);
	}
		
	puts("Digite o elemento a ser buscado");
	scanf("%d",&num);

	puts("------------------------------------");
	if(buscaS(v,n,num))
		puts("Elemento encontrado!");
	else
		puts("Elemento não encontrado!");

}
