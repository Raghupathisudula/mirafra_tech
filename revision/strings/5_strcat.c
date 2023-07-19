#include<stdio.h>
void mycat(char d[],char s[]);
int main()
{
	char d[100],s[100];
	printf("enter the destination string\n");
	scanf("%s",d);
	printf("enter the source string\n");
	scanf("%s",s);
	mycat(d,s);
	printf("%s",d);
}
void mycat(char d[],char s[])
{
	int i,j;
	for(i=0;d[i]!=0;i++);
	for(j=i,i=0;s[i]!=0;i++,j++)
	{
		d[j]=s[i];
	}

}










