#include<stdio.h>
struct bitfield
{
unsigned int flag1:4;
unsigned int flag2:4;
}b;
int main()
{
b.flag1=15;
b.flag2=14;
printf("%d %d\n",b.flag1,b.flag2);
}

