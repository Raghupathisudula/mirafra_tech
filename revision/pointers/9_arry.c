#include<stdio.h>
int main()
{
int i;
int a[10];
int *p=a;
for(i=0;i<10;i++)
{
scanf("%d",(p+i));
}
for(i=0;i<10;i++)
{
printf("the array element is %d\n",*(p+i));
printf("the array elemnts adress is %p\n",p+i);
}
}
