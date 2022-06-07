#include <stdio.h>

/**
 * main - outputs numbers
 *
 * outputs numbers followed by comma and space in ascii code in ascending order
 * Return: returns 0
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar((num % 10) + '0');
		if (num == 9)
			continue;
		putchar(44);
		putchar(32);
	}
	putchar('\n');
	return (0);
}
