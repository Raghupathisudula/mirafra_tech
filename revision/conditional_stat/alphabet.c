#include<stdio.h>
int main()
{
	char ch;
	printf("enter the character\n");
	scanf(" %c",&ch);
	if(ch>='a')
	{
		if(ch<='z')
			printf(" is alphabet \n");
		else
			printf("not an alphabet\n");
	}
	else if(ch>='A')
		{
			if(ch<='Z')
				printf("is an alphabet\n");
			else
				printf("not an alphabet\n");
		}
else
				printf("not an alphabet\n");
}
