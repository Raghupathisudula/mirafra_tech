#include<stdio.h>
int main()
{
int arr[5]={ 1,2,3,4,5};
int (*p)[5]=arr;
printf("%p",*p);
}
