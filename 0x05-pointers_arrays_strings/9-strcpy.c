#include "main.h"

/**
 * *_strcpy - pointer to copied string
 * @dest: detination param for string copied
 * @src: string to be copied param
 *
 * Return: returns pointers to destination
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0, len = 0;

	while (src[i] != '\0')
	{
		len++;
		i++;
	}
	for (i = 0; i < len; i++)
		dest[i] = src[i];
	for ( ; i < len ; i++)
		dest[i] = '\0';
	return (dest);
}

