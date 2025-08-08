#include<stdio.h>
int main()
{
int x,y,m,n,arr[7];
int *a[5]={&x,&y,arr,&m,&n};

int i;
for(i=0;i<5;i++)
{

printf("%p\n",a[i]);
}
}
