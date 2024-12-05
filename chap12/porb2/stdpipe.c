#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define MAXLINE100


int main(int argc, char* argv[])
{
	int n, pid, fd[2]
		char line(MAXLINE);

	pipe(fd);

	if ((pid = fork()) == 0) {
		close(fd[0]);
		dup2(fd[1],1);
		close(fd[1]);
		printf("Hello! pipe\n");
		printf("Bye! pipe\n");
	}else {
		close(fd[1]);
		printf("Results from the child process\n");
		while ((n = read(fd[0], link, MAXLINE100))> 0)
			write(STDOUT_FILENO, link, n);
	}

	exit(0);
}
