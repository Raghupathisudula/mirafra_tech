#include<stdio.h>
int main()
{
	int n,i;
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
		if(arr[i]%2==0)
		{
			printf("%d is even\n",arr[i]);
		}
		else
			printf("%d is odd\n",arr[i]);
	}
}
