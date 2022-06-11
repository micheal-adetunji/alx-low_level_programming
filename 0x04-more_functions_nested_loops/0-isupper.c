#include "main.h"

/**
 * _isupper - checks uppercase characters
 * @c: ascii character argument
 * outputs 1 for uppercase letters and 0 otherwise
 * Return: returns 1 for uppercase and 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
