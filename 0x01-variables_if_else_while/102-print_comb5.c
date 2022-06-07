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
	int num3;
	int num4;

	for (num1 = 0; num1 < 10; num1++)
	{
		for (num2 = 0; num2 < 9; num2++)
		{
			putchar((num1 % 10) + '0');
			putchar((num2 % 10) + '0');
			if (num1 == 9 && num2 == 8)
				continue;
			putchar(32);
			for (num3 = 0; num4 < 10; num3++)
			{
				for (num4 = num3 + 1; num4 < 10; num4++)
				{
					putchar((num3 % 10) + '0');
					putchar((num4 % 10) + '0');
					if (num3 == 9 && num4 == 9)
						continue;
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
