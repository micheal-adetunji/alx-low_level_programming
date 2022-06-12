#include "main.h"

/**
 * print_most_numbers - outputs most digits not all
 *
 * Return: returns void
 */
void print_most_numbers(void)
{
	int c;

	c = 0;
	while (c <= 9)
	{
		if (!(c == 2 || c == 4))
			_putchar(c + '0');
		c++;
	}
	_putchar('\n');
}
