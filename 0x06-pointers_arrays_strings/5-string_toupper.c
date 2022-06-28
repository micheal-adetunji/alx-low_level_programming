#include "main.h"

/**
 * string_toupper - Turn lowercase to uppercase
 * letters in a string
 * @str: string argument
 *
 * Return: returns pointer to string
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		else
			continue;
	}
	return (str);
}
