#include "main.h"
/**
 *_strncat - a function that concatenates two strings.
 *
 *@dest: destination string to append to
 *@src: string to add to the destination
 *@n: n byte of the src
 *
 *Return: dest string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i])
		i++;

	while (src[j] && j < n)
	{
		dest[i + j] = src[j];
		j++;
	}
	return (dest);
}
