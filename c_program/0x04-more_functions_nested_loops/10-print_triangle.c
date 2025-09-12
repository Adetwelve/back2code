#include "main.h"
/**
 *print_trianglei - a function that prints a triangle, followed by a new line
 *
 *@size: size is the size of the triangle
 *
 *Return: void
 */
void print_triangle(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			if (j < (size - i))
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}
}
