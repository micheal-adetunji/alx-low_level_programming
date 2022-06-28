#include "main.h"

/**
 * reverse_array - reverses an array / swapping
 * @a: array argument
 * @n: num of element in array
 *
 * Return: returns nothing
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < (n / 2); i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
