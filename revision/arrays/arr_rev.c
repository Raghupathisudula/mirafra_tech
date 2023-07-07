#include<stdio.h>

void reve(int [],int );
int main()
{
	int arr[10]={2,3,6,7,9,0,1,5,10,22};
	reve(arr,10);
	return 0;
}
void reve(int arr[],int n)
{
	int temp,i,j;
	for(i=0,j=9;i<5;i++,j--)
	{
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
	}
	for(i=0;i<10;i++)
		printf("%d\n",arr[i]);
}

