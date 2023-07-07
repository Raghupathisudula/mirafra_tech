#include<stdio.h>
extern int x;
int fun(void)
{
int b=10;
int s;
s=b+x;
printf("%d\n",s);
}

