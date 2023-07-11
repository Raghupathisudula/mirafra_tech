#include<stdio.h>

int main()
{
	int a[9]={3,4,-7,3,1,3,-4,2,-2};

	int i=0,j=0,sum=0,k=0;
	for(i;i<9;i++)
	{
		sum=0;
		k=i;
		for(j=i;j<9;j++)
		{
			sum+=a[j];
			if(sum==0)
			{
				
				for(i;i<=j;i++)
					printf("%d ",a[i]);
				printf("\n");
			}
			i=k;
		}
		
	}

