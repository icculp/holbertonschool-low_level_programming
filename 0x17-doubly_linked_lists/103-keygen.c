#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <pwd.h>
#include <string.h>

/**
* main - Program
* @ac: Argcs count
* @av: Args vars
* Return: Success
*/

int main(int ac, char **av)
{
	struct passwd *p;
	char *user;
	(void)ac;

	p = getpwuid(getuid());
	user = p->pw_name;
	if (!strcmp(av[1], user))
		printf("%s\n", user);
	return (1);
}
