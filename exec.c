#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
int main(void)
{
	char *args[]={"./fork",NULL};
	pid_t pid;
	pid = fork();
	if (pid == 0) {
		printf("Child Process\n");
		execl("/home/km/km_GITLAB/kmmt01esd15/revision/linux/process/./fork",args[0],(char*)0);
		printf("won't print\n");
    }
	else
		printf("Parent Process\n");
}

