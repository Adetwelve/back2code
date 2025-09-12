#include "main.h"
/**
 *print_numbers - A function that prints from 0 to 9, followed by new line
 *
 *Return: void
 *
 */
void print_numbers(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
		_putchar(n);
	_putchar('\n');
}
