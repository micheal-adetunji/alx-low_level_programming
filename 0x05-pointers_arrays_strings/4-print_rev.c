#include "main.h"

/**
 * print_rev - prints out string in rev
 * @s: string to print out
 *
 * Return: returns void
 */
void print_rev(char *s)
{
	int i, n;

	n = 0;
	i = 0;
	while (s[i++])
		n++;
	for (i = n - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
