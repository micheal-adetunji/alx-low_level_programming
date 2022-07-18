#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination string param
 * @src: source string param
 * @n: number of bytes of string to be appended
 *
 * Return: returns pointer dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, c;

	while (dest[i] != '\0')
		i++;
	c = 0;
	while (src[c] != src[n])
	{
		dest[i++] = src[c];
		c++;
	}
	dest[i] = '\0';
	return (dest);
}
