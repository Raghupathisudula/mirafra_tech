#include<stdio.h>
void myncat(char d[],char s[],int n);
int main()
{
	int n;
	char d[100],s[100];
	printf("enter the destination string\n");
	scanf("%s",d);
	printf("enter the source string\n");
	scanf("%s",s);
	printf("enter the number of characters\n");
	scanf("%d",&n);
	myncat(d,s,n);
	printf("%s",d);
}
void myncat(char d[],char s[],int n)
{
	int i,j;
	for(i=0;d[i]!=0;i++);
	for(j=i,i=0;s[i]!=0&&i<n;i++,j++)
	{
		d[j]=s[i];
	}

}


