#include <stdio.h>


int soma(int *v, int i,int a)
{
	if(a<i)
		if(v[a] > 0)
			return v[a] + soma(v,i,a+1);
		else
			return soma(v,i,a+1);
	else
		return 0;
}

main()
{
	int v[]={2,1,3,5,-4,-4,0,6,0};

	printf("Soma dos valores positivos %d\n",soma(v,8,0));
}
