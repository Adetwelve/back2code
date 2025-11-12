#include "main.h"
/**
 *_sqrt_helper - recursion helper to find sqrt
 *@n: number to find sqrt of
 *@y: candidate root
 *
 *Return: sqrt of n or -1 if not perfect square
 */
int _sqrt_helper(int n, int y)
{
	if (y * y > n)
		return -1;
	if (y * y == n)
		return y;
	return _sqrt_helper(n, y + 1);
}

/**
 *_sqrt_recursion - return the natural square root of n
 *@n: number
 *
 *Return: sqrt(n) or -1 if not perferct square
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return -1;

	return _sqrt_helper(n, 0);
}
