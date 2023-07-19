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
	int *p1,*p2,*p3;
	p1=&x;
	p2=&y;
	p3=&z;
	if(*p1>*p2)
	{
		if(*p1>*p3)
			printf("the bigest number is %d\n",*p1);
		else
			printf("the bigest number is %d\n",*p3);
	}
	if(*p2>*p3)
		printf("the bigest number is %d\n",*p2);
	else
		printf("the bigest number is %d\n",*p3);
}
