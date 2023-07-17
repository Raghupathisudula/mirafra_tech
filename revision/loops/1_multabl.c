#include<stdio.h>
int main()
{
	int a,n,i;
	printf("enter the given number\n");
	scanf("%d",&n);
	i=1;
	while(i<=10)
	{
		a=n*i;
		i++;
		printf("%d\n",a);
	}
}

