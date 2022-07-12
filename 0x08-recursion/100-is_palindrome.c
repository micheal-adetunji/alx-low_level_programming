#include "main.h"

int _palindrome(char *s, int len, int i);
int find_strlen(char *s);

/**
 * find_strlen - finds length of string
 * @s: string argument
 *
 * Return: returns length of string
 */
int find_strlen(char *s)
{
	int len = 0;

	if (*(s + len))
	{
		len++;
		len = len + find_strlen(s + len);
	}
	return (len);
}

/**
 * _palindrome - checks for palindrome
 * @s: string argument
 * @len: length of string
 * @i: index
 *
 * Return: returns 1 for empty string and 0 0therwise
 */
int _palindrome(char *s, int len, int i)
{
	if (s[i] == s[len / 2])
		return (1);
	else if (s[i] == s[len - i - 1])
		return (_palindrome(s, len, i + 1));

	return (0);
}

/**
 * is_palindrome - checks for empty strings
 * @s: string argument
 *
 * Return: returns 1 for empty string and 0 0therwise
 */
int is_palindrome(char *s)
{
	int i = 0;
	int len = find_strlen(s);

	if (!(*s))
		return (1);
	return (_palindrome(s, len, i));
}
