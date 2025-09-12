#include "main.h"
/**
 *_isupper - A function that checks for uppercase character
 *
 *Return: 1 for uppercase 0 otherwise
 *
 *@c: number to check
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
