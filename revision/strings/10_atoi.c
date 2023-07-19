#include<stdio.h>
int  atoi(char s[]);
int main()
{
	int x;
	char s[50];
	printf("enter the given string\n");
	scanf("%s",s);
	x=atoi(s);
	printf("%d\n",x);
}
int atoi(char s[])
{
	int i,res=0;
	for(i=0;s[i]!=0;i++)
	{
		res=res*10+s[i]-48;
	}
	return res;
}

