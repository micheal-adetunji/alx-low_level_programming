#include "main.h"

/**
 * _strcat - concatenate two strings
 * @dest: destination string param
 * @src: source string param
 *
 * Return: returns a char pointer dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, n;

	while (dest[i] != '\0')
		i++;
	n = 0;
	while (src[n] != '\0')
	{
		dest[i++] = src[n];
		n++;
	}
	dest[i] = '\0';
	return (dest);
}
