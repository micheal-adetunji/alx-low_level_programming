#include "main.h"

/**
 * _strlen - outputs length of string
 * @s: string variable
 *
 * Return: returns length of string
 */
int _strlen(char *s)
{
	int i, n;

	i = 0;
	n = 0;
	while (s[n++])
		i++;
	return (i);
}
