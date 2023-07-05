#include<stdio.h>
int main()
{
int x,y,m,n,arr[7];
int *p[5]={&x,&y,arr,&m,&n};

int i;
for(i=0;i<5;i++)
{

printf("%p\n",p[i]);
}
}
