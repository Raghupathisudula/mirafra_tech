#include<stdio.h>
static  int x=10;
int *ptr=&x;
int fun();
int fun1();
int main()
{
	int z=5;
	int a=z+x;
	printf("%d\n",a);
	int p=x+a;
	fun();
	fun1();
	printf("%d\n",p);
}
int fun()
{
	int y=40;
	int b=x+y;
	printf("%d\n",b);
}
