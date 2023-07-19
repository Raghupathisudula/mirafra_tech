#include<stdio.h>
int main()
{
	int x;
	printf("enter the x value\n");
	scanf("%d",&x);
	int *p1,*p2,*p3;
	p1=&x;	
	printf("the pointer variable is %d\n",*p1);
	p2=&x;	
	printf("the pointer variable is %d\n",*p2);
	p3=&x;
	printf("the pointer variable is %d\n",*p3);
	printf("chnge the x value\n");
	scanf("%d",&x);
	printf("after chnging is %d %d %d\n",*p1,*p2,*p3);
}


