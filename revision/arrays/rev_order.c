#include<stdio.h>
void arrrev(int a[],int );
int main()
{
	int a[10]={1,5,7,4,3,2,10,11,9,22};
	arrrev(a,10);
}

void arrrev(int a[],int n)
{
	int i;
	for(i=n-1;i>=0;i--)
	{
		printf("%d\n",a[i]);
	}
}
