#include<stdio.h>
int mycmp(char s1[],char s2[])
{
	int i;
	for(i=0;s1[i]!=0||s2[i]!=0;i++)
	{
		if (s1[i]>s2[i])
			return 1;
		if (s1[i]<s2[i])
			return -1;
	}
}
int main()
{
	int x;
	char s1[50],s2[50];
	scanf("%s%s",s1,s2);
	x=mycmp(s1,s2);
	printf("%d",x);
}

