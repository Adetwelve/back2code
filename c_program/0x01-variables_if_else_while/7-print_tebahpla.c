#include <stdio.h>
/**
 *main - Entry point
 *
 *Description: using Putchar to print alphabet
 *in reverse order
 *
 *Return: Always 0
 */
int main(void)
{
	int alpha = 'z';

	while (alpha >= 'a')
	{
		putchar(alpha);
		alpha--;
	}
	putchar('\n');
	return (0);
}
