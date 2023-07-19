#include<stdio.h>
#include<string.h>
void mypal(char a[]);
int main()
{
	char a[100];
	printf("enter the 1st string\n");
	scanf("%s",a);
	mypal(a);
}

void mypal(char a[])
{
	int i=0;
	int j=strlen(a)-1;
	while(j>i)
	{	
		if(a[i++]!=a[j--])
		{

			printf("is not palindrome");
			break;
		}
	
		else
				printf("is palindrome");
				break;
	}
}





