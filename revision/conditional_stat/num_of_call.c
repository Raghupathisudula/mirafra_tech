#include<stdio.h>
int main()
{
	int cost=250,calls;
	float bill;
	printf("enter the number of calls\n");
	scanf("%d",&calls);
	int a=calls-100;
	if(calls>100)
	{
		bill=250+(a*1.25);
		printf("the bill after 100 calls is %f\n",bill);
	}
	else
		printf("bill upto 100 calls\n");
}
