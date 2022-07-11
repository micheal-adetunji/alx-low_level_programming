#include "main.h"

/**
 * _puts_recursion - prints out string using
 * recursion method
 * @s: string parameter
 *
 * Return: returns nothing
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
