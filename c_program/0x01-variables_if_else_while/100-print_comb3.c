#include <stdio.h>
/**
 *main - Entry point
 *
 *Description: A program that prints all possible combinations of two digits
 *01 and 10 are considered the same combination of two digits 0 and 1
 *using putchar, not allowed to use any variable of type char
 *
 * Return: Alway (0)
 */
int main(void)
{
	int i = 0;

	while (i <= 8)
	{
		int j = i + 1;

		while (j <= 9)
		{
			putchar(i + '0');
			putchar(j + '0');
			if (i != 8 && i != 9)
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
