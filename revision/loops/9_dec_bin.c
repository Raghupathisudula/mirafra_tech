#include<stdio.h>
int main()
{
	int n,r,res=0;
	int i=1;
	printf("enter a given number\n");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%2;
		res=res+r*i;
		i=i*10;
		n=n/2;
	}
	printf("%d\n",res);
}

