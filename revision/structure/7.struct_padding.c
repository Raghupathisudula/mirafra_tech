#include<stdio.h>
//#pragma pack(1)
struct s
{
int a;
char b;
float c;
}t;
int main()
{
struct s t;
printf("%p %p %p",&t.a,&t.b,&t.c);
}


