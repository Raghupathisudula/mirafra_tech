#include<stdio.h>
int add(int a,int b);
int sub(int a,int b);
int mul(int a,int b);
int div(int a,int b);
int mod(int a,int b);
int main()
{
	int x,y;
	int(*fun)(int ,int);
	scanf("%d %d",&x,&y);
		fun=add;
	printf("the addition is %d\n",fun(x,y));
	fun=sub;
	printf("the subntraction is %d\n",fun(x,y));
	fun=mul;
	printf("the multiplication is %d\n",fun(x,y));
	fun=div;
	printf("the div is %d\n",fun(x,y));
	fun=mod;
	printf("the mod is %d\n",fun(x,y));
}
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
int mod(int a,int b)
{
	return a%b;
}










