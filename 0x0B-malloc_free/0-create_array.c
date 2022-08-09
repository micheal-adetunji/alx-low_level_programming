#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates arrays of chars
 * @size: size of array
 * @c: character
 *
 * Return: returns null if size is 0 or function fails
 *         otherwise retuens pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
