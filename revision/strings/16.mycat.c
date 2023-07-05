#include<stdio.h>
void mycat(char d[],char s[])
{
	int i,j;
	for(i=0;d[i]!=0;i++);
	for(j=i,i=0;s[i]!=0;i++,j++)
	{
		d[j]=s[i];
	}
	s[i]=0;
}
int main()
{
	char d[50],s[50];
	scanf("%s%s",d,s);
	mycat(d,s);
	printf("%s",d);
}

