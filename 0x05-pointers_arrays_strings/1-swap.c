#include "main.h"

/**
 * swap_int - swaps pointer values
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
