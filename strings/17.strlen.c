#include<stdio.h>
int mylen(char s[])
{
	int i;
	for(i=0;s[i]!=0;i++);
	return i;
}
int main()
{
	int x;
	char s[50];
	scanf("%s",s);
	x=mylen(s);
	printf("%d",x);
}


