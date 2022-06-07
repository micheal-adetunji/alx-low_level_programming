#include <stdio.h>

/**
 * main - outputs reverse alphabet
 *
 * outputs reverse alphabet
 * Return: returns 0
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);
	putchar('\n');
	return (0);
}
