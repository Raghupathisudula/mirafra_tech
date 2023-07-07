#include<stdio.h>
int main()
{
char x[2];
if((&x[1]-&x[0])<0)
{
printf("stack is down\n");
}
else
printf("stack is up\n");
}

