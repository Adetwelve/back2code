#include "main.h"
/**
 *factorial - Funtion that return factorial of a given number
 *@n: number to give factoria
 *
 *Return: factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return -1;
	if (n <= 1)
		return 1;

	return n * factorial(n - 1);
}
