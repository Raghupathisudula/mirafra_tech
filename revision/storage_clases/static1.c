#include<stdio.h>
extern int *ptr;
int fun1()
{

	int m=20;
	int k=(*ptr)+m;
	printf("%d\n",k);
}

