#include<stdio.h>
int main()
{
int a,b,c,d,e;
printf("enter the given numbers\n");
scanf("%d %d %d %d",&a,&b,&c,&d);
e=a>b?a:b;
e=e>c?e:c;
e=e>d?e:d;
printf("the big num is %d\n",e);
}

