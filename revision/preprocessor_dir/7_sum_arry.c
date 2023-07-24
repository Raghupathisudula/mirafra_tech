#include<stdio.h>
#define SUM(a) for(i=0;i<n;i++)\
{\
	sum=sum+a[i];\
}\
printf("%d\n",sum);\

int main()
{
	int sum=0,n,i;
	printf("enter the array size\n");
	scanf("%d",&n);
	int a[n];
	printf("enter the array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	SUM(a);
}
