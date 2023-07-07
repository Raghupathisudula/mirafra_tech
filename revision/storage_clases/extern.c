#include<stdio.h>

int fun(void);
int x=10;

int main()
{
	int y=20;
	int z,a;
	z=x+y;
	printf("%d\n",z);
	a=z+x;
	printf("%d\n",a);
	fun();
}

