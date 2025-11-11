#include "main.h"
/**
 *_strcmp - A function that compares two strings.
 *
 *@s1: first string
 *@s2: second string
 *
 *Return: 0 if same, negative number if s1 string is smaller
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	int result = 0;

	while (s1[i] && s2[j])
	{
		if (s1[i] != s2[j])
		{
			result = s1[i] - s2[j];
			return result;
		}
		i++;
		j++;

	}
	return result;
}
