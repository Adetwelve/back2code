#include "main.h"
/**
 *rot13 - a function that encodes a string using rot13
 *
 *@s: string to check
 *
 *Return: encoded string
 */
char *rot13(char *s)
{
	char code[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char encode[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i;
	int j;
	int encode_len = sizeof(encode) / sizeof(encode[0]);

	for (i = 0; s[i]; i++)
	{
		for (j = 0; j < encode_len; j++)
		{
			if (s[i] == code[j])
			{
				s[i] = encode[j];
				break;
			}
		}
	}
	return (s);
}
