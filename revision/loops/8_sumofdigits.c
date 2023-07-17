#include<stdio.h>
int main()
{
	int res=0,r,n;
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		res=res+r;
		n=n/10;
	}
	printf("the sum of integer is %d\n",res);
}

