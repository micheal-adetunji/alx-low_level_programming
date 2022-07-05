#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string argument
 * @needle: substring to find
 *
 * Return: returns pointer to beginning
 * of located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;
	
	i = 0;
	while (haystack[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (needle[j] != '\0')
	{
		j++;
	}
	while (*haystack)
	{
		char *str = haystack;

		while (*haystack && *needle && *haystack == *needle)
		{
			haystack++;
			needle++;
		}
		if (!*needle)
			return (str);

		haystack = str + 1;
	}
	return ('\0');
}
