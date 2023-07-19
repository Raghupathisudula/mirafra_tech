#include<stdio.h>
#include<string.h>
void mylcpy(char d[],char s[],int n);
int main()
{
	int n;
	char s[100], d[100];
	printf("enter the destination string\n");
	scanf("%s",d);
	printf("enter the source string\n");
	scanf("%s",s);
	printf("enter the number of characters\n");
	scanf("%d",&n);
	mylcpy(d,s,n);
	printf("%s",d);
}

void mylcpy(char d[],char s[],int n)
{
	int i;
	for(i=0;i<n-1;i++)
	{
		d[i]=s[i];
	}
	d[i]=0;
}

