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
	while (*haystack)
	{
		char *str = haystack;

		while (*haystack && *needle && *haystack == *needle)
		{
			haystack++;
			needle++;
		}
		if (*(needle + 1) == '\0')
			return (str);

		haystack = str + 1;
	}
	return ('\0');
}
