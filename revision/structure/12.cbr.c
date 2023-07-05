#include<stdio.h>
void cbr(int *a,int *b)
{
int temp;
temp=*a;
*a=*b;
*b=temp;
}
int main()
{
int x,y;
scanf("%d%d",&x,&y);
cbr(&x,&y);
printf("%d%d",x,y);
}

