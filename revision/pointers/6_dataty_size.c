#include<stdio.h>
int main()
{
int *p;
char *p1;
float *p2;
double *p3;

printf("the size is %zu %zu %zu %zu\n",sizeof(*p),sizeof(*p1),sizeof(*p2),sizeof(*p3));
printf("the size is %zu %zu %zu %zu\n",sizeof(p),sizeof(p1),sizeof(p2),sizeof(p3));
}
