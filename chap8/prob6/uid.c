#include <stdio.h>
#include <unistd.h>
#include <pwd.h>
#include <grp.h>

int main()
{
	printf("my real user ID : %d(%s) \n", getuid(), getpwuid(getuid())->pw_name);
	printf("my effetive user ID : %d(%s) \n", geteuid(), getpwuid(geteuid())->pw_name);
	printf("my real group ID : %d(%s) \n", getgid(), getgrgid(getgid())->gr_name);
	printf("my effetive group ID : %d(%s) \n", getegid(), getgrgid(geteuid())->gr_name);
}
