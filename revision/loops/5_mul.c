#include<stdio.h>
int main()
{
	int a,b,n;
	printf("enter the given two numbers\n"); 
	scanf("%d %d",&a,&b);
	int sum=0;
	int i=0;
	while(i<b)
	{
		sum=sum+a;
		i++;
	}
	printf("the number is %d\n",sum);
}
