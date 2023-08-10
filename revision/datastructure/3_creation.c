#include<stdio.h>
#include<stdlib.h>
	struct node
	{
		int data;
		struct node *next;
	};
int main()
{
	struct node *head=NULL,*newnode=NULL,*temp=NULL;
	int choice=1;
	while(choice)
	{
		newnode=(struct node *)malloc(sizeof(struct node));
		printf("enter the data in node\n");
		scanf("%d",&newnode->data);
		newnode->next=NULL;
		if(head==NULL)
		{
			head=temp=newnode;
		}
		else
		{
			temp->next=newnode;
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
	printf("%d\n",temp->data);
	getchar();
}

