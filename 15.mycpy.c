#include<stdio.h>
void mycpy(char d[],char s[])
{
	int i;
	for(i=0;s[i]!=0;i++)
	{
		d[i]=s[i];
	}
	d[i]=0;
}
int main()
{
	char d[50],s[50];
	printf("enter the given strings\n");
	scanf("%s%s",d,s);
	mycpy(d,s);
	printf("%s",d);
}

