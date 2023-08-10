#define R 3
#define C 4
#define R1 4
#define C1 2
#include<stdio.h>
int main()
{
	int A[R][C];
	int B[R1][C1];
	int max[R][C1];
	int i,j,k;
	printf("enter the 1st matrix\n");
	for(i=0;i<R;i++)
	{
		for(j=0;j<C;j++)
		{
			scanf("%d",&A[i][j]);
		}
	}
	printf("enter the 2nd matrix\n");
	for(i=0;i<R1;i++)
	{
		for(j=0;j<C1;j++)
		{
			scanf("%d",&B[i][j]);
		}
	}
	//multiplication

	for(i=0;i<R;i++)
	{
		for(j=0;j<C1;j++)
		{
			max[i][j]=0;
			for(k=0;k<C;k++)
			{
				max[i][j]=max[i][j]+A[i][k]*B[k][j];
			}
		
		}
	}
		printf("the result is :\n");
		for(i=0;i<R;i++)
		{
			for(j=0;j<C1;j++)
			{
				printf("%d\t",max[i][j]);
			}
			printf("\n");
		}

}
