#include "main.h"

/**
 * swap_int - swaps integer a and b
 * @a: pointer address to integer a
 * @b: pointer address to integer b
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
