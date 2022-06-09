#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - outputs numbers from n to 98
 * @n: input argument
 *
 * Return: returns void
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
			n++;
		}
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
			n--;
		}
	}
	else
		printf("%d", 98);
	printf("\n");
}
