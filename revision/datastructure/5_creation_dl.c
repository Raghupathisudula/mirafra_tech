#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node *next;
	struct node *prev;
}s1;
int main()
{
	s1 *head=NULL,*newnode=NULL,*temp=NULL;
	int choice=1;	
	while(choice)
	{
		newnode=(s1 *)malloc(sizeof(s1));
		printf("enter the data\n");
		scanf("%d",&newnode->data);
		newnode->next=NULL;
		newnode->prev=NULL;
		if(head==NULL)
		{
			head=temp=newnode;
		}
		else
		{
			temp->next=newnode;
			newnode->prev=temp;
			temp=newnode;
		}
		printf("do you want to continue(0,1)");
		scanf("%d",&choice);
	}
	temp=head;
	while(temp->next!=0)
	{
		printf("%d\n",temp->data);
		temp=temp->next;
	}
//	printf("%d\n",temp->data);
	getchar();
}



