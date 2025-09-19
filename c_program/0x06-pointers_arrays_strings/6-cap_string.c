#include "main.h"
/**
 *cap_string - a function that capitalizes all words of a string
 *
 *@s: string
 *
 *Return: capitalized string
 */
 char *cap_string(char *s)
{
	int i = 0;
	int j;
	char symbols[] = " ,;.?\"(){}\t\n";

	while (s[i])
	{
		for (j = 0; symbols[j]; j++)
		{
			if (s[i] == symbols[j])
			{
				i++;
				if (s[i] >= 'a' && s[i] <= 'z')
					s[i] -= 32;
			}
		}
		i++;		
	}
	return (s);

}
