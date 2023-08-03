#define max 5
#include<stdio.h>
int front=-1;
int rear=-1;
int queue[max];
int n;
int Isempty(void)
{
	if(rear==front)
		return 1;
	else
		return 0;
}
int Isfull(void)
{
	if(rear==max-1)
		return 1;
	else
		return 0;
}
void insertion(int n)
{
	if(Isfull()==1)
	{
		printf("queue is full\n");
		return;
	}
	else
	{
		queue[++rear]=n;
	}
}
int deletion(void)
{
	if(Isempty()==1)
	{
		printf("queue is empty\n");
		return -1;
	}
	else
		return queue[++front];
		
}
int main()
{
	int i,x,y;
	int ch;
	while(1)
	{
		printf("enter ur choice 1.insertion 2.deletion 3.print 4.quit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("enter the element to insert\n");
				scanf("%d",&x);
				insertion(x);
				break;
			case 2:
				y=deletion();
				printf("the deleted elemnt is %d\n",y);
				break;
			case 3:
				for(i=front+1;i<=rear;i++)
				{
					printf("%d",queue[i]);
				}
				break;

			default:
				break;	

		}
		if(ch==4)
			break;
	}
	return 0;
}

