#include <stdio.h>
#include <stdlib.h>

int getMax(int *v,int i,int atual)
{
	if(atual<i)
		if(getMax(v,i,atual+1) > v[atual])
			return getMax(v,i,atual+1);
	return v[atual];

}

main()
{

	int v[]={3,432,45,2,-6,0};
	

	printf("O maior elemento do vetor é %d\n", getMax(v,5,0));

}

