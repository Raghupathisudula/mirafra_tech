#include<stdio.h>
int main()
{
	int num[12];
	int i;
	int min,max;
	for(i=0;i<12;i++)
	{
		scanf("%d",&num[i]);
	}
	for(i=0;i<12;i++)
	{
		if(i==0)
		{
			min=num[i];
			max=num[i];
		}
		if(min>num[i])
		{
			min=num[i];
		}
		else
			max=num[i];
	}
	printf("%d\n",min);
	printf("%d\n",max);
}
