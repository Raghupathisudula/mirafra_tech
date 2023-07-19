#include<stdio.h>
int myncmp(char s1[], char s2[],int n);
int main()
{
	int x;
	char s1[50],s2[50];
	int n;
	printf("enter the gven string\n");
	scanf("%s",s1);
	printf("enter the given string\n");
	scanf("%s",s2);
	printf("enter the value\n");
	scanf("%d",&n);
	x=myncmp(s1,s2,n);
	printf("%d\n",x);
}

int myncmp(char s1[], char s2[],int n)
{
	int i,c;
	for(i=0;s1[i]!=0||s2[i]!=0;i++)
	{
		if(s1[i]>s2[i])
			return 1;
		if(s1[i]<s2[i])
			return -1;
		if(s1[i]==s2[i])
			return 0;
	}
}
