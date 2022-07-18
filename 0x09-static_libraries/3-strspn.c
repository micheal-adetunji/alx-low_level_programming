#include "main.h"

/**
 * _strspn - gets the length of a prefix
 * substring
 * @s: main string
 * @accept: prefix string
 *
 * Return: returns length of prefix
 * substring
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, n = 0;

	i = 0;
	while (s[i])
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				n++;
				break;
			}
			else if (accept[j + 1] == '\0')
				return (n);
		}
		i++;
	}
	return (n);
}


