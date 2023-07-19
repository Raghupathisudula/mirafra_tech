#include<stdio.h>
int main()
{
	int *p1,*p2;
	int x,y;
	p1=&x;
	p2=&y;

	scanf("%d %d",p1,p2);
	printf("addition of ptr is %d\n",*p1+*p2);
}
