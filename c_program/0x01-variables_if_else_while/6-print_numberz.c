#include <stdio.h>
/**
 *main - Entry point
 *
 *Description: A program using putchar to print a
 *ll single digit followed by newline
 *
 * Return: Always 0
 */
int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		putchar(48 + num);
		num++;
	}
	putchar(10);   /**decimal for new line '\n'*/
	return (0);
}
