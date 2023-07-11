#include<stdio.h>
void pair(int num[],int target);
int main()
{
	int num[6]={8,7,2,5,3,1};
	int target=10;
	pair(num,target);
	return 0;
}
void pair(int num[],int target )
{
	int i,j;
	int c=0;
	for(i=0;i<6;i++)
	{
		for(j=i+1;j<6;j++)
		{
			if(num[i]+num[j]==target)
			{
				c++;
				printf(" pair is found at %d %d\n",num[i],num[j]);
			}
		
		}
	}
	if(c==0)
	printf("pair is not found\n");
}

