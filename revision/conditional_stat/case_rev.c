#include<stdio.h>
int main()
{
	char ch;
	printf("enter the given character\n");
	scanf(" %c",&ch);
	if(ch>='a')
	{
		if(ch<='z')
		{
			ch=ch-32;
			printf(" %c is case reverse\n",ch);
		}
	}
	else if(ch>='A')
	{
		if(ch<='Z')
		{
			ch=ch+32;
			printf("%c is casereverse\n",ch);
		}
	}
	else
		printf("%c is not a caserev\n",ch);
}
