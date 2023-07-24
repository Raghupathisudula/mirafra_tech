#include<stdio.h>
#define PRIME(a,b) for(i=a;i<=b;i++)\
{\
	c=0;\
	for(j=1;j<=i;j++)\
	{\
		if(i%j==0)\
		c++;\
	}\
	if(c==2)\
	printf("%d ",i);\
}\

int main()
{
	int a,b;
	int i,j,c=0;
	printf("enter the values\n");
	scanf("%d%d",&a,&b);
	PRIME(a,b)
}
