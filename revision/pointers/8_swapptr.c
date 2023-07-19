#include<stdio.h>
int main()
{
	int *p1,*p2,*p3,*temp;
	int x,y,z;
	printf("enter the x value\n");
	scanf("%d",&x);
	printf("enter the y value\n");
	scanf("%d",&y);
	printf("enter the z value\n");
	scanf("%d",&z);
	p1=&x;
	p2=&y;
	p3=&z;
	*temp=*p1;
	*p1=*p2;
	*p2=*p3;
	*p3=*temp;
	printf("after rotating the values are %d %d %d\n",*p1,*p2,*p3);
}
