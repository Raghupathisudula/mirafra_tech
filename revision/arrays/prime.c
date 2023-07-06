#include<stdio.h>
int main()
{
	int n,i,j;
	printf("enter the no ofelements\n");
	scanf("%d",&n);
	int arr[n];
	printf("enter the array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		int c=0;
		for(j=1;j<=arr[i];j++)
		{

			if(arr[i]%j==0)
			{
				c++;
			}
		}
		if(c==2)
		{

			printf("%d is prime\n",arr[i]);
		}
	}
}
