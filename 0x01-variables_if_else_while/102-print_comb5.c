#include <stdio.h>

/**
 * main - outputs two two digit number
 *
 * outputs two two digit number
 * Return: returns 0
 */
int main(void)
{
	int num1;
	int num2;

	for (num1 = 0; num1 < 99; num1++)
	{
		for (num2 = num1 + 1; num2 < 100; num2++)
		{
			putchar((num1 / 10) + '0');
			putchar((num1 % 10) + '0');
			putchar(32);
			putchar((num2 / 10) + '0');
			putchar((num2 % 10) + '0');
			if (num1 == 98 && num2 == 99)
				continue;
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
