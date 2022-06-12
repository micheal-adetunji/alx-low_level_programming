#include "main.h"

/**
 * print_triangle - as the name implies
 * @size: size argument of triangle
 *
 * Return: returns void
 */
void print_triangle(int size)
{
	int i, c, n;

	if (size > 0)
	{
		for (i = 0; i <= (size - 1); i++)
		{
			for (c = 0; c < (size - 1) - i; c++)
				_putchar(' ');
			for (n = 0; n <= i; n++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
