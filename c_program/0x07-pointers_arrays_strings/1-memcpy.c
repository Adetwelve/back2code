#include "main.h"
/**
 *_memcpy - A function that copies memory area
 *
 *@src: pointer to the source memory area
 *@dest: pointer to destination memory area
 *@n: number of byes to copy from src to dest
 *
 *Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return dest;
}
