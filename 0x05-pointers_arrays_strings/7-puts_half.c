#include "main.h"

/**
 * puts_half - outputs 2nd half of string
 * @str: string argument
 *
 * Return: returns void
 */
void puts_half(char *str)
{
	int i = 0, n = 0;

	while (str[i] != '\0')
	{
		n++;
		i++;
	}
	if ((n % 2) == 0)
	{
		for (i = n / 2; i < n; ++i)
			_putchar(str[i]);
		_putchar('\n');
	}
	else
	{
		for (i = ((n - 1) / 2) + 1; i < n; ++i)
			_putchar(str[i]);
		_putchar('\n');
	}
}
