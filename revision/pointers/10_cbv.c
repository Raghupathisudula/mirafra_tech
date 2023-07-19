#include<stdio.h>
void cbv(int a,int b);
int main()
{
int a,b;
printf("enter the a value\n");
scanf("%d",&a);
printf("enter the b value\n");
scanf("%d",&b);
cbv(a,b);
}
void cbv(int a,int b)
{
int temp;
temp=a;
a=b;
b=temp;
printf("after swapping the elemnts are %d %d\n",a,b);
}

