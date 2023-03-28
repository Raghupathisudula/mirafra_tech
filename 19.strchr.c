#include<stdio.h>
int mystrchr(char s[],char c)
{
	int i;
	for(i=0;s[i]!=0;i++)
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
	x=mystrchr(s,c);
	printf("%d",x);
}

