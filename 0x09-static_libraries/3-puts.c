#include "main.h"

/**
 * _puts - output line of string followed by newline
 * @str: pointer to string
 *
 * Return: returns void
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
