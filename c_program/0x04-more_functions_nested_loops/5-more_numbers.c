#include "main.h"
/**
 *more_numbers - function that prints 10 times the numbers 0-14 then new line
 *
 *Return: void
 */
void more_numbers(void)
{
	int c;
	int n;
	int t;
	int u;

	for (c = 0; c <= 9; c++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
			{
				t = n / 10;
				_putchar(t + '0');
			}
			u = n % 10;
			_putchar(u + '0');
		}
	_putchar('\n');
	}
}
