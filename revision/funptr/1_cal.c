#include<stdio.h>
int sum(int a,int b);
int sub(int a,int b);
int mul(int a,int b);
int div(int a,int b);
int main()
{
	int a,b;
	printf("enter the values\n");
	scanf("%d %d",&a,&b);
	int (*ptr)(int ,int);
	ptr=sum;
	printf("sum=%d\n",ptr(a,b));
	ptr=sub;	
	printf("sub=%d\n",ptr(a,b));
	ptr=mul;
	printf("mul=%d\n",ptr(a,b));
	ptr=div;
	printf("div=%d\n",ptr(a,b));
}
int sum(int a,int b)
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
