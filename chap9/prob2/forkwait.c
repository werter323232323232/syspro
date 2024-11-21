#include <sys/types.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
	int pid, child, status;
	printf("[%d] parents process start \n", getpid());
	pid = fork();
	if (pid == 0){
		printf("[%d] descendent process start \n", getpid());
		exit(1);
	}
	child = wait(&status);
	printf("[%d] descendent process %d  termination \n", getpid(),child);
	printf("\t termination code %d\n", status>>8);
}
