#include<stdio.h>
int main()
{
	int x;
	printf("enter the value\n");
	scanf("%d",&x);
	int *p=0;
	p=&x;
	printf("%d %p %zu\n",x,&x,sizeof(x));
	printf("%d %p %zu\n",*p,p,sizeof(*p));
}
