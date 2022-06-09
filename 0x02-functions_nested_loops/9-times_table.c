#include "main.h"

/**
 * times_table - outputs 9 times table
 *
 * outputs 9 times table i.e from 0 - 1
 * Return: returns void
 */
void times_table(void)
{
	int num1;
	int num2;
	int total;

	for (num1 = 0; num1 <= 9; num1++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (num2 = 1; num2 <= 9; num2++)
		{
			total = num1 * num2;
			if ((total / 10) > 0)
				_putchar((total / 10) + '0');
			else
				_putchar(' ');
			_putchar((total % 10) + '0');
			if (num2 < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
