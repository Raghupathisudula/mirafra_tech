#include<stdio.h>
int main()
{
	int sum=0,i=1,n;
	scanf("%d",&n);
	while(i<=n)
	{
		sum=sum+i;
	printf("the series is %d\n",i);
	i++;
	}
	printf("the sum of numbers is %d\n",sum);
}
