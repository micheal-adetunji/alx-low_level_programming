#include "main.h"

/**
 * _strncpy - copies n num of src to dest string
 * @dest: destination string param
 * @src: source string param
 * @n: number of string to be copied
 *
 * Return: returns pointer destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, c;

	while (src[i] != '\0')
		i++;
	for (c = 0; src[c] && c < n; c++)
		dest[c] = src[c];
	for (c = i; c < n; c++)
		dest[c] = '\0';
	return (dest);
}
