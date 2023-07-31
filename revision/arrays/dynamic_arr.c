#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i;
	int *arr;
	arr=(int *)malloc(sizeof(int)*n);
	printf("enter the array size\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
	free(arr);
}
