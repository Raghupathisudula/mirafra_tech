#include<stdio.h>
int main()
{
	int x,y,z;
	printf("enter the x value\n");
	scanf("%d",&x);
	printf("enter the y value\n");
	scanf("%d",&y);
	printf("enter the z value\n");
	scanf("%d",&z);
	int *p;
	p=&x;	
	printf("the pointer variable is %d\n",*p);
	p=&y;	
	printf("the pointer variable is %d\n",*p);
	p=&z;
	printf("the pointer variable is %d\n",*p);
}

