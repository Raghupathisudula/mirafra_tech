#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
int main(void)
{	
	char *p="./fork";
	char *args[]={p,NULL};
	pid_t pid;
	pid = fork();
	if (pid == 0) {
		printf("Child Process\n");
		execvp(p,args);
		printf("won't print\n");
    }
	else
		printf("Parent Process\n");
}

