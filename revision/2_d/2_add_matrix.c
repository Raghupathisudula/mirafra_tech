#define Row 3
#define colum 4
#include<stdio.h>
int main()
{
	int A[Row][colum];
	int B[Row][colum];
	int C[Row][colum];
	int i,j;
	printf("enter the 1st matrix\n");
		for(i=0;i<Row;i++)
		{
			for(j=0;j<colum;j++)
			{
				scanf("%d",&A[i][j]);
			}
		}
	printf("enter the 2nd matrix details\n");
	for(i=0;i<Row;i++)
	{
		for(j=0;j<colum;j++)
		{
			scanf("%d",&B[i][j]);
		}
	}
	//addition matrix
	for(i=0;i<Row;i++)
	{
		for(j=0;j<colum;j++)
		{
			C[i][j]=A[i][j]+B[i][j];
		}
	}
	for(i=0;i<Row;i++)
	{
		for(j=0;j<colum;j++)
		{
			printf("%d\t",C[i][j]);
		}
		printf("\n");
	}
}

