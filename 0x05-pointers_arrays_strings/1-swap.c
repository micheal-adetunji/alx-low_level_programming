#include "main.h"

/**
 * swap_int - swaps pointer values a and b
 * @a: pointer address to int a
 * @b: pointer address to int b
 *
 * Return: returns void
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
