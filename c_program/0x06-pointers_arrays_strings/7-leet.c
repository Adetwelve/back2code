#include "main.h"
/**
 *leet - a function that encodes a string into 1337.
 *
 *@s: string to encode
 *
 *Return: pointer to string
 */
char *leet(char *s)
{
	int i;
	int j;
	char code[] = "aAeEoOtTlL";
	char leet[] = "43071";

	for (i = 0; s[i]; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (s[i] == code[j])
			{
				s[i] = leet[j / 2];
				break;
			}
		}
	}
	return (s);

}
