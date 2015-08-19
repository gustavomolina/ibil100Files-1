//Rafael Stefanini Carreira
#include <stdio.h>
#include <stdlib.h>

int buscab(int *v,int n, int num)
{
	int d,e,m;
	e=0;
	d=n;

	while(d > e)
	{
		m=(d+e)/2;
		if(v[m] == num || v[d] == num || v[e] == num)
			return 1;
		else if(v[m]>num)
		{
			d=m-1;
			e++;
		}
		else
		{
			d--;
			e=m+1;
		}
	}
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
	if(buscab(v,n,num))
		puts("Elemento encontrado!");
	else
		puts("Elemento não encontrado!");

}
