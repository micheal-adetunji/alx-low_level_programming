#include "main.h"

/**
 * _strpbrk - searches a string for any
 * of a set of bytes
 * @s: string arg1
 * @accept: string arg2
 *
 * Return: returns pointer to s
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	j = 0;
	while (s[j])
	{
		for (i = 0; accept[i]; i++)
		{
			if (s[j] == accept[i])
				return (s + j);
		}
		j++;
	}
	return ('\0');
}
