#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(){
	pid_t pid;
	
	if ((pid=fork()) == -1)
		perror("fork failed");
	else if (pid != 0)	//if parent process
		printf("Child PID is %d, Parent PID is %d\n", pid, getpid());
	else			//if child process
		printf("Parent PID is %d\n", getppid());
	return 0;
}


