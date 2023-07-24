#include<stdio.h>
int fun(int arr[],int n);
int main()
{
	int x,i;
	int n;
	printf("enter the array size\n");
	scanf("%d",&n);
	int arr[n];
	printf("enter the array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	x=fun(arr,n);
	printf("%d\n",x);
}
int fun(int arr[],int n)
{
	int i,big;
	for(i=0;i<n;i++)
	{
		if(i==0)
		{
			big=arr[i];
		}
		if(arr[i]>big)
			big=arr[i];
	}
	return big;
}
