#include "main.h"

/**
 * more_numbers - prints out digits
 * in a range in ten lines
 *
 * Return: returns void
 */
void more_numbers(void)
{
	int i, c;

	for (i = 0; i <= 9; i++)
	{
		for (c = 0; c < 15; c++)
		{
			if (c >= 10 && c < 15)
				_putchar((c / 10) + '0');
			_putchar((c % 10) + '0');
		}
		_putchar('\n');
	}
}
