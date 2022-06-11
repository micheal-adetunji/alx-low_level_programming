#include "main.h"

/**
 * _isdigit - checks for digits
 * @c: ascii character argument
 *
 * outputs 1 if character is btw 0 & 9, 0 0therwise
 * Return: returns 1 for digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
