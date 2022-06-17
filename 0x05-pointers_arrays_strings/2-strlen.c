#include "main.h"

/**
 * _strlen - outputs length of string
 * @s: string variable
 *
 * Return: returns length of string
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s++)
		i++;
	return (i);
}
