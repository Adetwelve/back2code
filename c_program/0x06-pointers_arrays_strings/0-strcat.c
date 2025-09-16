#include "main.h"
/**
 *_strcat(char *dest, char *src) - A function that appends the src string'
 *to the dest string, overwritting the terminating null byte
 *
 *@dest: destination string to be appended to
 *@src: string to appen to destination
 *
 *Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i])
		i++;

	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';

	return dest;
	
}
