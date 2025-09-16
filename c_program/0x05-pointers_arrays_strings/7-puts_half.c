#include "main.h"
/**
 *puts_half - function should print second half of a string
 *
 *@str: parameter for string
 *
 *Return: void
 */
void puts_half(char *str)
{
	int i;
	int len = 0;
	int n;

	while (str[len])
	{
		len++;
	}
	len--;

	n = len / 2;

	for (i = n + 1; i <= len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');

}
