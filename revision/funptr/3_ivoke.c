#include<stdio.h>
int add (int a,int b)
{
	return a+b;
}
void invokeptr(int (*fun)(int,int),int x,int y)
{
	printf("%d\n",(*fun)(x,y));
}
int main()
{
	int x,y;
	scanf("%d %d",&x,&y);
	invokeptr(add,x,y);
}

