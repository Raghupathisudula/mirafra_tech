#include<stdio.h>
int add(int a,int b)
{
	return a+b;
}
int sub(int a,int b)
{
	return a-b;
}
int mul(int a,int b)
{
	return a*b;
}
int div(int a,int b)
{
	return a/b;
}
int main()
{
	int i;
	int x,y;
	int(*fun[4])(int,int)={add,sub,mul,div};
	scanf("%d%d",&x,&y);
	fun[0]=add;
	printf("add is %d\n",fun[0](x,y));
}
