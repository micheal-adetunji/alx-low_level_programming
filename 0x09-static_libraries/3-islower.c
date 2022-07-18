#include "main.h"

/**
 * _islower - output 1 for lowercase characters
 * @c: c will be interpreted in ascii code as argument
 *
 * output 1 for lowercase characters and 0 otherwise
 * Return: retuns 1 for lowercase and 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
	return (0);
}
