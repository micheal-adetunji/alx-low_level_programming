#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string 1 param
 * @s2: string 2 param
 *
 * Return: returns an integer on success
 */
int _strcmp(char *s1, char *s2)
{
	int c = 0;

	while (s1[c] || s2[c])
	{
		if ((s1[c] - s2[c]) != 0)
			return (s1[c] - s2[c]);
		c++;
	}
	return (0);
}
