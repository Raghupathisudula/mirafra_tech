#include<stdio.h>
int main()
{
	int arr1[10],arr2[10];
	int i,j,n;
	printf("enter array size\n");
	scanf("%d",&n);
	printf("enter the  first array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr1[i]);
	}
	printf("enter the second array elements\n");
	for(j=0;j<n;j++)
	{
		scanf("%d",&arr2[j]);
	}
	for(i=0,j=n-1;i<10&&j>=0;i++,j--)
	{
		int temp;
		temp=arr1[i];
		arr1[i]=arr2[j];
		arr2[j]=temp;
	}
	printf("first array elements are\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",arr1[i]);
	}
printf("second array elements are\n");
	for(j=0;j<n;j++)
	{
		printf("%d\n",arr2[j]);
	}
}

