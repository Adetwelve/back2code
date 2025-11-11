#include "main.h"
/**
 *_strstr - a function that locates a substring needle in a string
 *
 *@haystack: pointer to the string
 *@needle: pointer to the subsring
 *
 *Return: pointer to the begining of the located substring
 *or Null if substring not found
 */
char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
		return (haystack);

	while (*haystack)
	{
		char *h = haystack;
		char *n = needle;

		while (*h && *n && *h == *n)
		{
			h++;
			n++;
		}

		if (!*n)
			return (haystack);

		haystack++;
	}
	return (0);
}
