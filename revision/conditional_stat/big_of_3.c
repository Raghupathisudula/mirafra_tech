#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the given elements\n");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
			printf(" %d is big\n",a);
		else
			printf("%d is big\n",c);
	}
	else if(b>c)
		printf("%d is big\n",b);
	else
		printf("%d is big\n",c);
}
