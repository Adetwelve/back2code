#include "main.h"
/**
 *string_toupper - a function that changes all lowercase
 *letters of a string to uppercase
 *
 *@s: string 
 *
 *Return: uppercase string
 */
char *string_toupper(char *s)
{
	int i = 0;

	while(s[i])
	{
		if (s[i] >= 90 && s[i] <= 122)
			s[i] -= 32;
	}
	return (s);
}
