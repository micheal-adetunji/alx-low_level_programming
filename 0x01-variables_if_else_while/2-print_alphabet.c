#include <stdio.h>

/**
 * main - outputs letters in lowercase
 *
 * outputs letters in lowercase
 * Return: returns 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch  <= 'z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
