#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *ptr1,*ptr2,i;
	ptr1=(int*)malloc(sizeof(int));
	ptr1=ptr2;
	for(i=0;i<5;i++)
	{
		*ptr1=20;
		ptr1++;
	}
	printf("end");
	free(ptr2);
}

