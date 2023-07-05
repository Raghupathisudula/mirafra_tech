#include<stdio.h>
 #include <sys/types.h>
 #include <unistd.h>

int main()
{
	int x=20;
	int y=50;
	int pid;
	pid=fork();
	if(pid==0)
	{
		printf("this is the child process\n");		
		printf(" %d is child getpid_number\n",getpid());
		printf(" %d is parent_id \n",getppid());
		y=1,x=0;
	}
	else
	{
		sleep(2);
		printf("this is the parent process\n");	
	printf(" %d is parent getpid_number\n",getpid());
		printf(" %d  parent_id \n",getppid());
		y=60,x=90;
	}
	printf("%d %p is\n",x,&x);
	printf("%d %p is \n",y,&y);
}

