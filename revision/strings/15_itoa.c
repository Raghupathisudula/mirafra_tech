#include<stdio.h>
void myitoa(int x);
int main()
{
	int x;
	printf("enter the given string\n");
	scanf("%d",&x);
        myitoa(x);
}

void myitoa(int x)
{
	int i,j,r;
	char s[100];
	for(i=0;x!=0;i++)
	{
		r=x%10;
		s[i]=r+'0';
		x=x/10;
	}
	for(j=i-1,i=0;i<j;i++,j--)
	{
		char t;
		t=s[i];
		s[i]=s[j];
		s[j]=t;
	} 
	printf("%s\n",s);
}

