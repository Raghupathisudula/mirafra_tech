#include<stdio.h>
int main()
{
	int i,j;
	int temp;
int n;
printf("enter the array size\n");
scanf("%d",&n);
int a[n];
//	int a[7]={1,2,3,4,5,6,7};
printf("enter the array elements\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
	for(i=1;i<n;i=i+2)
	{
		if(a[i-1]>a[i])
		{
			temp=a[i];
			a[i]=a[i-1];
			a[i-1]=temp;
		}
		if(a[i+1]>a[i])
		{
			temp=a[i];
			a[i]=a[i+1];
			a[i+1]=temp;
		}
	}
for(i=0;i<n;i++)
{
	printf(" rearanged elements array is %d\n",a[i]);
}
}

