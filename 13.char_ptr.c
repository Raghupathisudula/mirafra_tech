#include<stdio.h>
int main()
{
int x,y,m,n,arr[7];
int *a[5]={&x,&y,arr,&m,&n};

int j;
for(j=0;j<5;j++)
{
printf("%p\n",a[j]);
}
}
