#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
int main()
{
char *args[]={"NULL"};
pid_t pid;
	pid = fork();
	if (pid == 0) {
		printf("Child Process\n");
		execlp("./fork",args[0],(char*)0);
		printf("won't print\n");
    }
	else
		printf("Parent Process\n");
}

