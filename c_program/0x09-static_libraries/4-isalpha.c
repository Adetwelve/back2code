#include "main.h"
/**
 *_isalpha - A function that checks for alphabetic character
 *
 *@c: Parameter
 *
 *Return: 1 if c ps uppercase or lowercase otherwise 0
 */
int _isalpha(int c)
{
	return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
}
