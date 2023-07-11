#include<stdio.h>
int main()
{
	int i,n,c=0,k=0,x,y;
	printf("enter the array size\n");
	scanf("%d",&n);
	int arr[n];

	printf("enter the array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter the element to search\n");
	scanf("%d",&x);
	printf("enter the element to search\n");
	scanf("%d",&y);
	for(i=0;i<n;i++)
	{
		if(arr[i]==x)
		{
			c++;
			printf(" %d number is found at %d\n",x,i);
		}
	else if(arr[i]==y)
		{
			k++;
			printf(" %d number is found at %d\n",y,i);
		}
	}
			printf(" %d is num repeated %d times\n",x,c);
  			
			printf(" %d is num repeated %d times\n",y,k);


}
