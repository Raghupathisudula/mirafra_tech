#include<stdio.h>
union a
{
unsigned int f1:4;
unsigned int f2:5;
};
int main()
{
union a b;
b.f1=14;
printf("%d\n",b.f1);
b.f2=16;
printf("%d\n",b.f2);
}



