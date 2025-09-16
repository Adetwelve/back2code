#include "main.h"
/**
 *puts2 - a function that prints every other character of a string,
 *starting with the first character
 *
 *@str: Parameter containing string
 *
 *Return: void
 */
void puts2(char *str)
{
	int len;
	int i;

	while (str[len])
	{
		len++;
	}
	len--;

	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
