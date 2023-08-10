#include<stdio.h>
#define R 3
#define C 4
int main()
{
	int A[R][C],B[C][R];
	int i,j;
	printf("enter the fst matrix\n");
	for(i=0;i<R;i++)
	{
		for(j=0;j<C;j++)
		{
			scanf("%d",&A[i][j]);
		}
	}
	for(i=0;i<C;i++)
	{
		for(j=0;j<R;j++)
		{
			B[i][j]=A[j][i];
		}
	}
	printf("the transpose of matrix is :\n");
	for(i=0;i<C;i++)
	{
		for(j=0;j<R;j++)
		{
			printf("%d\t",B[i][j]);
		}
		printf("\n");
	}
}

