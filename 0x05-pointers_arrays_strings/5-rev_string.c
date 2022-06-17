#include "main.h"

/**
 * rev_string - reverses string s
 * @s: string argument
 *
 * Return: returns void
 */
void rev_string(char *s)
{
	int c = 0, i;
	char rev;

	while (s[c] != '\0')
		c++;
	for (i = c - 1; i >= c / 2; i--)
	{
		rev = s[i];
		s[i] = s[c - i - 1];
		s[c - i - 1] = rev;
	}
}
