#include <stdio.h>
#include <unistd.h>


int main()
{
	printf("my process number : [%d]\n", getpid());
	printf("my parents's process number : [%d]\n:, getpid());
}
