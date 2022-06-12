#include "main.h"

/**
 * print_diagonal - outputs n number of \ diagonally
 * @n: input argument
 *
 * Return: returns void
 */
void print_diagonal(int n)
{
	int i, c;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (c = 0; c < i; c++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
