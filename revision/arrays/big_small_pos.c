#include<stdio.h>
int main()
{
	int n;
	int i,big,small,bigpos,smallpos;
	printf("enter an array size\n");
	scanf("%d",&n);
	int arr[10];
	printf("enter the array elements\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<10;i++)
	{
		printf("%d\n",arr[i]);
	}
	for(i=0;i<10;i++)
	{
		if(i==0)
		{
			big=arr[i];
			small=arr[i];
			bigpos=i;
			smallpos=i;
		}
		else
			if(arr[i]>big)
			{
				big=arr[i];
				bigpos=i;
			}
		if(arr[i]<small)
		{
			small=arr[i];
			smallpos=i;
		}
	}
	printf("the biggest number is %d\n",big);
	printf("the smalles number is %d\n",small);
	printf("the bigerposition is %d\n",bigpos);
	printf("the smallest number position is %d\n",smallpos);
}
