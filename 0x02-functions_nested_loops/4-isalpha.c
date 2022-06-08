#include "main.h"

/**
 * _isalpha - outputs 1 for alphabets
 * @c: ascii code(char) as argument
 *
 * outputs 1 for alphabets and 0 otherwise
 * Return: returns 1 if true,0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
