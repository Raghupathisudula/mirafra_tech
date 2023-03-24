#include<stdio.h>
 extern int a;
int main()
{
 int  a=10,b=20;
int c;
a=a+b;

printf("%d\n",a);
{
int f=40;
int d;
d=a+f;
printf("%d\n",d);
}
}
