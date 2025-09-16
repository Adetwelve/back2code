#include "main.h"
/**
 *print_rev - A func that prints a string, in reverse, followed by a new line
 *
 *@s: Parameter points to string
 *
 *Return: void
 */
void print_rev(char *s)
{
	int len = 0;
	int i;

	while (s[len])
		len++;
	len--;

	for (i = len; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
