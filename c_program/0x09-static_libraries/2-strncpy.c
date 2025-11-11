#include "main.h"
/**
 *_strncpy - A function that copies a string.
 *
 *@dest: destination buffer where the string will be copied
 *@src: source of string to copy
 *@n: max number of bytes to copy
 *
 *Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] && i < n; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
