#include<stdio.h>
void myrev(char s[],int i,int j);
int main()
{
	char s[100]="i am in india";
	int i=0,l=0,j=0;
	for(i=0;s[i]!=0;i++)
	{
		l=i;	
	}
	for(j=i-1,i=0;i<j;i++,j--)
	{
		char temp;
		temp=s[i];
		s[i]=s[j];
		s[j]=temp;
	}
	printf(" after reversing the string is\n %s %d\n",s,l);
//	i=0;
	//	while(i<l-1)
	for(i=0;i<=l;i++)
	{
		if(i==0)
		{
			j=i;
		}
		if(s[i]==32||s[i]==0)
		{
			myrev(s,i-1,j);
			j=i+1;
		}
		//i++;
	}
	printf("the final string is %s\n",s);

}
void myrev(char s[],int i,int j)
{

	for(;j<=i;i--,j++)
	{
		char z;
		z=s[i];
		s[i]=s[j];
		s[j]=z;
	}
}
