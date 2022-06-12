#include "main.h"

/**
 * print_line - outputs n number of lines
 * @n: input argument
 *
 * Return: returns void
 */
void print_line(int n)
{
	int c;

	if (n > 0)
	{
		for (c = 1; c <= n; c++)
			_putchar('_');
		_putchar('\n');
	}
	else
		_putchar('\n');
}
