//#define Row 3
//#define colum 4
#include<stdio.h>
int main()
{
	int arr[3][4];
	int i,j;
	printf("enter the matrix\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}

