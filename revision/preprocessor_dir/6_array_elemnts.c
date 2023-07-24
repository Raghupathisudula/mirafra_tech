#include<stdio.h>
#define arr(a,n) for(i=0;i<n;i++)\
{\
	printf("%d\n",a[i]);\
}\

int main()
{
	int i,n;
	printf("enter the size\n");
	scanf("%d",&n);
	printf("enter the array elements\n");
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	arr(a,n);
}

