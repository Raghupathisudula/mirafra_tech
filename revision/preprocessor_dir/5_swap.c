#include<stdio.h>
#define SWAP(a,b) temp=a;\
a=b;\
b=temp;\
printf("the swap is %d ,%d\n",a,b);
int main()
{
int a,b,temp;
scanf("%d %d",&a,&b);
SWAP(a,b);
}
