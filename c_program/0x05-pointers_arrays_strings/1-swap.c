#include "main.h"
/**
 *swap_int - A function that swaps the value of two integers
 *
 *@a: parameter 1 pointer
 *@b: parameter 2 pointer
 *
 *Return: void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
