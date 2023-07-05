#include<stdio.h>
int mystrrchr(char s[],char c)
{
	int i;
	for(i=0;s[i]!=0;i++);
	for(i=i-1;s[i]!=0;i--)

	{
		if(s[i]==c)
	return i;
}
return 0;
}
int main()
{
	int x;
	char s[50],c;
	printf("enter the string\n");
	scanf("%s %c",s,&c);
	x=mystrrchr(s,c);
	printf("%d",x);
}

