#include<stdio.h>
int main()
{
	int n,m;
	int i,j;
	char s1[50], s2[50],s3[100];
	printf("enter the fst string\n");
	scanf("%s",s1);
	printf("enter the second string\n");
	scanf("%s",s2);
	printf("enter the number of words in fst string\n");
	scanf("%d",&n);
	printf("enter the numbr of words in second string\n");
	scanf("%d",&m);
	
	
		for(i=0;i<n;i++)
		{
		s3[i]=s1[i];
		}
	for(j=0;j<m;i++,j++)
	{
		s3[i]=s2[j];
	}
	printf("%s",s3);
}
