#include <stdio.h>
/**
 *main - Entry point
 *
 *Description: A program that prints all possible combinations of three digits
 *012,120, 102,021,201,210 are considered the same combination
 *of three digits 0 and 1
 *using putchar, not allowed to use any variable of type char
 *
 * Return: Alway (0)
 */
int main(void)
{
	int i = 0;

	while (i <= 7)
	{
		int j = i + 1;

		while (j <= 8)
		{
			int k = j + 1;

			while (k <= 9)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');

				if (!(i == 7 && j == 8 && k == 9))
				{
					putchar(',');
					putchar(' ');
				}

				k++;

			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
