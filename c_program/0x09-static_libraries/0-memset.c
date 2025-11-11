#include "main.h"
/**
 *_memset - A function that fills memory with a constant byte
 *
 *@s: pointer to memory area to be filled
 *@n: number of byte to fill with
 *@b: constant byte to fill with
 *
 *Return: pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return s;
}
