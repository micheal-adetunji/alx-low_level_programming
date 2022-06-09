#include "main.h"

/**
 * print_times_table - outputs times table of given integer
 * @n: integer argument
 *
 * Return: returns void
 */
void print_times_table(int n)
{
	int num1, num2, total;

	if ((n > 0) && (n < 16))
	{
		for (num1 = 0; num1 <= n; num1++)
		{
			_putchar('0');
			_putchar(',');
			_putchar(' ');
			for (num2 = 1; num2 <= n; num2++)
			{
				total = num1 * num2;
				if ((total / 10) == 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((total % 10) + '0');
				}
				else if (((total / 10) > 0) && ((total / 10) <= 9))
				{
					_putchar(' ');
					_putchar((total / 10) + '0');
					_putchar((total % 10) + '0');
				}
				else if (((total / 10) > 9) && ((total / 10) <= 99))
				{
					_putchar((total / 100) + '0');
					_putchar(((total / 10) % 10) + '0');
					_putchar((total % 10) + '0');
				}
				if (num2 < n)
				{
					_putchar(','), _putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
	else if (n == 0)
		_putchar('0'), _putchar('\n');
}
