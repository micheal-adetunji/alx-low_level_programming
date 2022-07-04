#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string argument
 * @c: character to be located
 *
 * Return: returns first occurrence of the char c
 * in the str s, or NULL if the char is not found
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}
