#include "main.h"

/**
 * puts2 - outputs every other character from
 * a string
 * @str: string argument
 *
 * Return: returns void
 */
void puts2(char *str)
{
	int i = 0, n = 0;

	while (str[i] != '\0')
	{
		n++;
		i++;
	}
	for (i = 0; i < n; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
