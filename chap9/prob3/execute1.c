#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
	printf("parents process start\n");
	if (fork() == 0){
		execl("/bin/echo", "echo", "hello", NULL);
		fprintf(stderr,"first failure");
		exit(1);
	}
	printf("parents process end\n");
}
