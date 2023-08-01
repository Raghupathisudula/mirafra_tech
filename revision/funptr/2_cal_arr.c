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
	int (*ptr[5])(int ,int)={sum,sub,mul,div};
	printf(" sum=%d\n",(*ptr[0])(a,b));
	printf(" sub=%d\n",(*ptr[1])(a,b));
	printf(" mul=%d\n",(*ptr[2])(a,b));
	printf(" div=%d\n",(*ptr[3])(a,b));
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

