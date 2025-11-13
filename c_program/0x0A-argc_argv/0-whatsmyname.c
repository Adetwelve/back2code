#include <stdio.h>
/**
 *argc - Number of argument on command line
 *
 *argv - pointer to an array of string
 *
 *program prints its name
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n",argv[0]);
	return (0);
}
