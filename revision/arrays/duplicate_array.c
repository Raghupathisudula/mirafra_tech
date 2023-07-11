#include<stdio.h>
void duplicate(int arr[],int );
int main()
{
	int arr[]={1,2,2,3,3,4};
	int n;
	printf("enter the aaray size\n");
	scanf("%d",&n);
	duplicate(arr,n);
}
void duplicate(int arr[],int n)
{
	int i,j,k;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				for(k=j;k<n;k++)
				{
					arr[k]=arr[k+1];
				}
				n--;
				j--;
			}
		}
	}
	for(i=0;i<n;i++)
	{
	printf("the duplicate elemens is %d\n",arr[i]);
	}
}
