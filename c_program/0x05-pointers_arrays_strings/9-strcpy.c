#include "main.h"
/**
 *_strcpy - A function that copies the string pointed to by src, 
 *including the terminating null bytes(\0) to
 *the buffer pointed by dest
 *
 *
 *@src:  Pointer to the source string
 *@dest: Pointer to the destination buffer
 *
 *Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return dest;
}

