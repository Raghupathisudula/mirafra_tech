#include<stdio.h>
void cbv(int a,int b)
{
int temp;
temp=a;
a=b;
b=temp;
printf("%d%d",a,b);
}
int main()
{
int x,y;
scanf("%d%d",&x,&y);
cbv(x,y);
}

