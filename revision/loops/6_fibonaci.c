#include<stdio.h>
int main()
{
	int a=0,b=1,c,n;
	int i=0;
	scanf("%d",&n);
	while(i<=n)
	{
		c=a+b;
		a=b;
		b=c;
	printf("%d\n",c);
	i++;
	}
}
