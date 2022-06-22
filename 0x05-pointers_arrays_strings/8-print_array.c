#include <stdio.h>
#include "main.h"

/**
 * print_array - outputs n numbers of arrays
 * @a: array parameter
 * @n: number of array to be printed parameter
 *
 * Return: returns void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
