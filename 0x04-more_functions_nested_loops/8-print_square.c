#include "main.h"

/**
 * print_square - outputs sqaure with character #
 * @size: input argument
 *
 * Return: returns void
 */
void print_square(int size)
{
	int i, c;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (c = 0; c < size; c++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
