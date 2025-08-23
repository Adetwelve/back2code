#include <stdio.h>
/**
 *main - Entry point
 *
 *Description: a program that prints the alphabet in lowercase
 *
 *Return: Always (0)
 */
int main(void)
{
	char alpha = 'a';
	char zee = 'z';

	while (alpha <= zee)
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
