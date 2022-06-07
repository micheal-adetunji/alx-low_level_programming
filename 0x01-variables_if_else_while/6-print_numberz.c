#include <stdio.h>

/**
 * main - outputs numbers
 *
 * outputs numbers using putchar
 * Return: returns 0
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		putchar((n % 10) + '0');
	return (0);
}
