#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints sum of the sum of
 * two diagonals in a square matrix
 * @a: square matrix or 2d square array
 * @size: size of square matrix
 * Note - a denotes base address in loop
 * i.e first element in loop
 * Return: returns nothing
 */
void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	i = 0;
	while (i < size)
	{
		sum1 = sum1 + a[i];
		sum2 = sum2 + a[size - i - 1];
		a = a + size;
		i++;
	}
	printf("%d, %d\n", sum1, sum2);
}
