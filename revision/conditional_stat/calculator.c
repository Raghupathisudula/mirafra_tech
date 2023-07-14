#include<stdio.h>
int main()
{
	int a,b;
	char ch;
	int res;
	printf("enter the integer numbers\n");
	scanf("%d %d",&a,&b);
	printf("enter the character from user\n");
	scanf(" %c",&ch);
	if(ch== '+')
	{
		printf("addition is %d\n",res=a+b);
	}
	if(ch=='-')
	{
		printf("sub is %d\n",res=a-b);
	}
	if(ch=='*')
	{
		printf("multiplication is %d\n",res=a*b);
	}
	if(ch=='%')
	{
		printf("module is %d\n",res=a%b);
	}
	if(ch=='/')
	{
		printf("divison is %d\n",res=a/b);
	}
}
