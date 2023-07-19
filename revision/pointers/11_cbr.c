#include<stdio.h>
void cbr(int *p1,int *p2);
int main()
{
	int a,b;
	printf("enter the a value\n");
	scanf("%d",&a);
	printf("enter the b value\n");
	scanf("%d",&b);
	cbr(&a,&b);
	printf("after swapping %d %d\n",a,b);
}
void cbr(int *p1,int *p2)
{
	int temp;
	temp=*p1;
	*p1=*p2;
	*p2=temp;
}

