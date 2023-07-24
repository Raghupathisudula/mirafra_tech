#include<stdio.h>
#define MAX(x,y) if(x>y)\
	printf("%d is max",x);\
	else\
	printf("%d is max",y);
int main()
{
	int x,y;
	printf("enter the values of xand y\n");
	scanf("%d %d",&x,&y);
	MAX(x,y)
}
