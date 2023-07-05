#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
int main()
{
char *args[]={"./fork",NULL};
char * envp[]={"MIRAFRATECH=raghu"};
pid_t pid;
	pid = fork();
	if (pid == 0) {
		printf("Child Process\n");
		execle("/home/km/km_GITLAB/kmmt01esd15/revision/linux/process/./fork",args[0],(char*)0,envp);
		printf("won't print\n");
    }
	else
		printf("Parent Process\n");
}

