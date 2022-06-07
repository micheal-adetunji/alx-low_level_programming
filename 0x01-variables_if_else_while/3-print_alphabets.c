#include <stdio.h>

/**
 * main - output letters
 *
 * output letters in uppercase and lowercase
 * Return: returns 0
 */
int main(void)
{
	char ch;
	char letter;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);
	putchar('\n');
	return (0);
}
