#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
int main(void)
//int main(int argc,char *argv[])
{
	char *p="/home/km/km_GITLAB/kmmt01esd15/revision/linux/process/./fork";
	char *argv[]={NULL};
	pid_t pid;
	pid = fork();
	if (pid == 0) 
    {
		printf("Child Process\n");
		
	//	execv("/home/km/km_GITLAB/kmmt01esd15/revision/linux/process/./fork",argv);
		execv(p,argv);
		printf("won't print\n");
    }
	else
		printf("Parent Process\n");
}

