#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node *next;
}s1;

s1 *createnode(void)
{
	s1 *new=(s1*)malloc(sizeof(s1));
	scanf("%d",&new->data);
	new->next=NULL;
	return new;
}
s1 *insertion_pos(s1 *temp,int p)
{

	s1 *newnode=NULL,*Head=NULL;
	Head=temp;
	int i=1;
	newnode=createnode();
	if(p==1)
	{
		newnode->next=Head;
		Head=newnode;
		return newnode;
	}
	else
	{
		while(i<p-1&&temp->data)
		{
			temp=temp->next;
			i++;
		}
		newnode->next=temp->next;
		temp->next=newnode;
		return Head;
	}
}
s1 *insertion_begin(s1 *temp)
{
	s1 *newnode=NULL,*Head=NULL;
	Head=temp;
	newnode=createnode();
	if(Head)
	{
		newnode->next=Head;
	}
	return newnode;
}
void insertion_end(s1 *temp)
{
	s1 *newnode=NULL,*Head=NULL;
	newnode=createnode();
	while(temp->next!=0)
	{
		temp=temp->next;
	}
	temp->next=newnode;
}

s1* delete_begin(s1 *Head)
{
	s1 *temp=NULL;
	temp=Head;
	Head=temp->next;
	free(temp);
	return Head;
}
void delete_end(s1 *temp)
{
	s1 *Head,*q=NULL;
	while(temp->next->next!=0)
	{
		temp=temp->next;
	}
	q=temp->next;
	temp->next=NULL;
	free(q);
}
s1* delete_pos(s1 *Head,int p)
{
	s1 *temp=NULL,*q=NULL;
	temp=Head;
	for(int i=1;i<p-1;i++)
	{
		temp=temp->next;
	}
	q=temp->next;
	temp->next=temp->next->next;
	free(q);
	return Head;
}

void printll(s1 *p)
{
	while(p)
	{
		printf("%d\n",p->data);
		p=p->next;
	}
}

int main()
{

	s1 *Head=NULL,*newnode=NULL,*temp=NULL;
	int n,p;
	char c;
	while(1)
	{
		newnode=createnode();
		if(!Head)
		{
			Head=newnode;
		}
		else
		{
			temp->next=newnode;

		}
		temp=newnode;
		printf("do you want to continue(y,n)\n");
		getchar();
		scanf("%c",&c);
		if(c=='n')
			break;
	}
	while(1)
	{
		printf("choose your option:\n");
		printf("1.insert at poistion\n 2.insert at begining\n 3.insert at end\n 4.delete at begin\n 5.delete at end\n 6.delete at pos\n 7.print\n 8.quit\n");
		scanf("%d",&n);
		switch(n)
		{
			case 1:
				printf("enter a position\n");
				scanf("%d",&p);
				Head=insertion_pos(Head,p);
				break;
			case 2:
				Head=insertion_begin(Head);
				break;

			case 3:
				insertion_end(Head);
				break;
			case 4:
				Head=delete_begin(Head);
				break;
			case 5:
				delete_end(Head);
				break;
			case 6:
				printf("enter a position\n");
				scanf("%d",&p);
				Head=delete_pos(Head,p);
				break;
			case 7:
				printll(Head);
				break;
			default:
				printf("enter the valid option\n");	
				break;
		}
		if(n==8)
			break;
	}
}
