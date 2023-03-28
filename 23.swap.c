#include<stdio.h>
int main()
{
	int x,y;
	printf("enter the two values\n");
	scanf("%d%d",&x,&y);
	x=x^y;
	y=x^y;
	x=x^y;
	printf("%d %d is after swaping\n",x,y);
}


