#include "main.h"
#include <stdio.h>
/**
 *rev_string - a function that reverses a string
 *
 *@s: string
 *
 *Return: void
 */
void rev_string(char *s)
{
	int i;
	int len = 0;
	int j;
	char temp;

	while (s[len])
	{
		len++;
	}

	j = len - 1;
	for (i = 0; i < j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}
