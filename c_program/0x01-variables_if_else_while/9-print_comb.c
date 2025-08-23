#include <stdio.h>
/**
 *main - entry point
 *
 *Description: using putchar to print sigle digit
 *foolowed by ',' and space and a newline .
 *Return: alway (0)
 */
int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		putchar(num + '0');
		if (num < 9)
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}
	putchar('\n');
	return (0);
}
