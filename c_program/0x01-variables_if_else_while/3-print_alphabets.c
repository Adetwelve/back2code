#include <stdio.h>
/**
 *main - Entry point
 *
 *Description: prints alphabet in lowercase, and uppercase then newline.
 *
 *Return: Always (0)
 */
int main(void)
{
	char lc = 'a';
	char lz = 'z';
	char uc = 'A';
	char uz = 'Z';

	while (lc <= lz)
	{
		putchar(lc);
		lc++;
	}

	while (uc <= uz)
	{
		putchar(uc);
		uc++;
	}
	putchar('\n');
	return (0);
}
