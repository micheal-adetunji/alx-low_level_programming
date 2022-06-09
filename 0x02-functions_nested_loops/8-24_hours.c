#include "main.h"

/**
 * jack_bauer - print every minute of 24 hours
 *
 * print every minute of 24 hours on a newline
 * Return: returns 0 on success
 */
void jack_bauer(void)
{
	int num1;
	int num2;

	for (num1 = 0; num1 <= 23; num1++)
	{
		for (num2 = 0; num2 <= 59; num2++)
		{
			_putchar((num1 / 10) + '0');
			_putchar((num1 % 10) + '0');
			_putchar(':');
			_putchar((num2 / 10) + '0');
			_putchar((num2 % 10) + '0');
			_putchar('\n');
		}
	}
}
