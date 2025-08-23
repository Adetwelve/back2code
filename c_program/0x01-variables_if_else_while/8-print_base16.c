#include <stdio.h>
/**
 *main - Entry point
 *
 *Description: using putchar to print
 *all the numbers in base 16 followed by newline
 *
 *Return: Alway 0
 */
int main(void)
{
	int num = 0;
	int alpha = 'a';

	while (num <= 9)
	{
		putchar(48 + num);
		num++;
	}
	while (alpha <= 'e')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
