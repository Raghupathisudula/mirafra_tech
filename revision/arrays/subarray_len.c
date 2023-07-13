#include<stdio.h>
int main()
{
	int i=0,j=0,k=0,c=0;
	int a[9]={5,6,-5,5,3,5,3,-2,0};
	int target=8;
	for(i=0;i<9;i++)
	{
		int	sum=0,k=0,l=i;
		for(j=i;j<9;j++)
		{
			sum+=a[j];
			k++;
			if(target==sum)
			{
				for(i=l;i<=j;i++)
				{
					printf("%d ",a[i]);
				}
				printf("\n");
				if(c<k)
				{
					c=k;
				}
			}
}
			i=l;
	}
	printf("the max subarray length is %d\n",c);
}
