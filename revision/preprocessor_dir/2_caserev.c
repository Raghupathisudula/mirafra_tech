#include<stdio.h>
#define CASE(ch) if(ch>=65&&ch<=90)\
{\
	ch=ch+32;\
	printf("%c is caserev\n",ch);\
}\
	else if(ch>=97&&ch<=122)\
	{\
		ch=ch-32;\
			printf("%c is caserev\n",ch);\
	}\

	int main()
	{
		char ch;
		printf("enter the character\n");
		scanf( "%c",&ch);
		CASE(ch);
	}
