#include "main.h"
/**
 *_strspn - A function that gets the length of a prefix substring.
 *
 *@s: Pointer to string
 *@accept: pointer to set of allowed characters
 *
 *Return: No of bytes in initial segment of string
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i, j, match;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			match = 0;
			if (s[i] == accept[j])
			{
				match = 1;
				break;
			}
		}
		if (!match)
			break;

		count++;
	}
	return (count);

}
