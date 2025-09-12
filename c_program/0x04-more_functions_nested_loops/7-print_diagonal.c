#include "main.h"
/**
 *print_diagonal - a function that draws a diagonal line on the terminal
 *
 *@n: n is the number of times the character \ should be printed
 *
 *Return: void
 */
void print_diagonal(int n)
{
	int j;
	int k;

	if (n <= 0)
		_putchar('\n');

	for (j = 0; j < n; j++)
	{
		for (k = 0; k < j; k++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
