#include<stdio.h>
 #include <sys/types.h>
 #include <unistd.h>
#include<stdlib.h>
#include<sys/wait.h>
int main()
{
	int x=20;
	int y=50;
	int pid;
	pid=vfork();
	if(pid==0)
	{
		printf("this is the child process\n");		
		printf(" %d is child process id\n",getpid());
		printf(" %d child parent id \n",getppid());
		y=1,x=0;
		exit(1);
	}
	else
	{
		sleep(2);
		int status;
		wait(&status);
		printf("this is the parent process\n");	
	printf(" %d is parent process\n",getpid());
		printf(" %d parent parent's process id \n",getppid());
		y=60,x=90;
	}
	printf("%d %p is\n",x,&x);
	printf("%d %p is \n",y,&y);
}

