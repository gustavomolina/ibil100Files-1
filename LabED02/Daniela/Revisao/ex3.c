#include <stdio.h>
#include <stdlib.h>

int fibo(int n)
{
	if(n==0)
		return 0;
	else if(n==1)
		return 1;
	else
		return (fibo(n-1) + fibo(n-2));
}
main()
{
	int n;
	puts("digite N : ");
	scanf("%d",&n);

	printf("valor de Fn: %d\n",fibo(n));
}
