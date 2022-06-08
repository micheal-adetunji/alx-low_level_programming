#include "main.h"

/**
 * print_alphabet_x10 - outputs all lowercase alphabet
 *
 * outputs all lowercase alphabet in 10 lines
 * Return: returns void on success
 */
void print_alphabet_x10(void)
{
	int x = 1;
	char ch;

	while (x <= 10)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
		x++;
	}
}

