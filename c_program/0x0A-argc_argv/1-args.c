#include <stdio.h>
/**
 *main - Program prints number of argument
 *@argc: Argument count
 *@argv: Argument vector (array of strings)
 *
 *Return: always 0
 */
int main(int argc, char *argv[])
{
	(void)argv; /* To avoid unused variable warning */
	printf("%d\n", argc);

	return (0);
}
