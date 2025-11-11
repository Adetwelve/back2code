#include "main.h"
/**
 *_strchr - A function that locates a character in a string.
 *
 *@s: pointer to the string
 *@c: character to check for in string
 *
 *Return: pointer to first occurance of c in the string
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return s;
		s++;
	}
	
	if (c == '\0')
		return s;

	return 0;
}
