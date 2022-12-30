#include <cstdio>

int main()
{
	int i,A[10],B[10];
	for(i=0;i<10;i++)
			scanf("%d",&A[i]);
	for(i=0;i<10;i++)
			scanf("%d",&B[i]);
	int ac=0,bc=0;
	for(i=0;i<10;i++)
	{
			if(A[i]>B[i]) ac++;
			else if(A[i]<B[i]) bc++;
	}
	if(ac>bc) printf("A");
	else 	if(ac<bc) printf("B");
	else	printf("D");
}
