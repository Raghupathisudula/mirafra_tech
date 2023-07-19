#include<stdio.h>
int main()
{	
	char *p1,*p2;
	char x,y;
	printf("enter a character\n");
	scanf("%c",&x);
	printf("enter the charactr\n");
	scanf(" %c",&y);
	//int *p1,*p2;
	p1=&x;
	p2=&y;
	if(*p1>=65&&*p2<=122)
	{
		if(*p1>*p2)
			printf(" the highest asci value is %c",*p1);
		else
			printf("the highest asci value is %c",*p2);
	}
}
