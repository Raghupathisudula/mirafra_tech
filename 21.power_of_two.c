#include<stdio.h>
int main()
{
	int n;
	printf("enter the given number\n");
	scanf("%d",&n);
	if((n&(n-1))==0)
		printf("number is power of two\n");
	else
		printf("number is not power of two\n");
}
