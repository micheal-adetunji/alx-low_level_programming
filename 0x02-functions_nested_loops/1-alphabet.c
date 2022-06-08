#include "main.h"

/**
 * print_alphabet - outputs lowercase alphabet
 *
 * outputs lowercase alphabet using _putchar twice and the
 * created print_alphabet function
 * Return: returns void on success
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
