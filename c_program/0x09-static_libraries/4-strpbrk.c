#include "main.h"
/**
 *_strpbrk - A function that searches a string for any of a set of bytes
 *
 *@s: Pointer to the original string
 *@accept: pointer to the tring to check for
 *
 *Return: a pointer to the byte in s that matches one of the bytes in accept
 *or Null if no such is found
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return &s[i];
			}
		}
	}
	return 0;
}
