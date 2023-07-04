
#include<stdio.h>
#include<sys/wait.h>
//#include<sys/exit.h>
 #include <sys/types.h>
 #include <unistd.h>
#include<stdlib.h>
int main()
{
	int x=20;
	int y=50;
	int pid;
	pid=fork();
	if(pid==0)
	{
		printf("this is the child process\n");
		printf(" %d is child processid\n",getpid());
		printf(" %d is child parent process id \n",getppid());
		y=1,x=0;
		exit(5);
	}
	else
	{
		getchar();
		int status;
		wait(&status);
		printf("%d\n",WEXITSTATUS(status));

		getchar();
		printf("this is the parent process\n");
		printf(" %d is parent process id\n",getpid());
		printf(" %d  parent's process id \n",getppid());
		y=60,x=90;
	}
	printf("%d %p is\n",x,&x);
	printf("%d %p is \n",y,&y);
}


