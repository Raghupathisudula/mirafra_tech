#include<stdio.h>
#define size 7
void push(int n);
int pop(void);
int stack[size];
int top=-1;
int n;
int IsEMPTY(void)
{
	if(top==-1)
		return 1;
	else
		return 0;
}
int ISFULL(void)
{
	if(top==size-1)
		return 1;
	else
		return 0;
}

void push(int n)
{
	if(ISFULL()==1)
	{
		printf("stack is full\n");
		return;
	}
	stack[++top]=n;
}
int pop(void)
{
	int n;
	if(IsEMPTY()==1)
	{
		printf("stack is empty\n");
		return -1;
	}
	n=stack[top];
	top--;
	return n;
}
int pip(void)
{
	if(IsEMPTY()==1)
	{
		printf("stack is empty\n");
		return -1;
	}
	return stack[top];
}
int main()
{
	int x,y,z;
	int ch,i;

	while(1) 
	{
		printf("enter ur choice 1.push 2.pop 3.pip 4.print 5.quit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: 
				printf("enter element to push\n");
				scanf("%d",&x);
				push(x);
				break;
			case 2:
				y=pop();
				break;
			case 3:
				 z=pip();
				printf("the pip element is =%d\n",z);
				break;
			case 4:
				for(i=0;i<=top;i++)
				{
					printf("%d ",stack[i]);
				}
				break;
			default:
				break;

		}
		if(ch==5)
		break;
	}
	return 0;
}
