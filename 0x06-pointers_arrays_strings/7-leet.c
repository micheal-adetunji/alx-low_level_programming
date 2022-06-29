#include "main.h"

/**
 * leet - encodes string to 1337
 * @str: string to be encoded
 *
 * Return: return pointer to str
 */
char *leet(char *str)
{
	int i, j;
	char a[] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	for (i = 0; str[i]; i++)
	{
		for (j = 0; a[j]; j++)
		{
			if (str[i] == a[j] || str[i] - 32 == a[j])
				str[i] = j + '0';
		}
	}
	return (str);
}
