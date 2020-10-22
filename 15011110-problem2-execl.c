#include <stdio.h>
#include <unistd.h>

int main()
{
	pid_t pid;
	int stat;
	//to return main program, we need to use fork() function
	pid = fork();
	if(pid==0)
		execl("/bin/ls", "ls", 0);
	wait(&stat);
	printf("quit program\n");
	return 0;
}
	
