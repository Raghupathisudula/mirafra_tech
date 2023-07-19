#include<stdio.h>
void myrev(char s[]);
int main()
{
	char s[50];
	printf("enter a given string\n");
	scanf(" %s",s);
	myrev(s);
	printf("%s\n",s);
}
void myrev(char s[])
{
	int i,j,n;
	for(i=0;s[i];i++);
	n=i--;
	for(j=0;j<=(n/2);j++,i--)
	{
		char temp;
		temp=s[i];
		s[i]=s[j];
		s[j]=temp;
	}
}
