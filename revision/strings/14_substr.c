#include<stdio.h>
int strrcmp(char s1[],char s2[],int i);
int strrstr(char s1[],char s2[]);
int main()
{
	char s1[100]="mirafra technologies hyderabad";
	char s2[100]="technologies";
	int k=strrstr(s1,s2);
	if(k!=-1)
		printf("substring f =%d\n",k);
	else
		printf("nf\n");
}
int strrcmp(char s1[],char s2[],int i)
{
	int j;
	for(j=0;s2[j]!=0;i++,j++)
	{
		if(s1[i]>s2[j])
			return -1;
		if(s1[i]<s2[j])
			return 1;
	}
	return 0;
}
int strrstr(char s1[],char s2[])
{
	int i,j,k;
	for(i=0,j=0;s1[i]!=0;i++)
	{
		if(s1[i]==s2[j])
			k=strrcmp(s1,s2,i);
		if(k==0)
			return i;
	}
	return -1;
}
