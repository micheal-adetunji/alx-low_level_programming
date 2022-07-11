#include "main.h"

/**
 * _pow_recursion - returns power of two ints
 * @x: int param 1
 * @y: int param 2
 *
 * Return: returns an integer
 */
int _pow_recursion(int x, int y)
{
	int result = x;

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	result = result * _pow_recursion(x, y - 1);
	return (result);
}

