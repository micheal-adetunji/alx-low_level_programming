#include "main.h"

/**
 * cap_string - capitalize words in a
 * string
 * @str: string argument
 *
 * Return: returns pointer to str
 */
char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if (str[i - 1] == ' ' ||
			str[i - 1] == '\t' ||
			str[i - 1] == '\n' ||
			str[i - 1] == ',' ||
			str[i - 1] == ';' ||
			str[i - 1] == '.' ||
			str[i - 1] == '!' ||
			str[i - 1] == '?' ||
			str[i - 1] == '"' ||
			str[i - 1] == '(' ||
			str[i - 1] == ')' ||
			str[i - 1] == '{' ||
			str[i - 1] == '}')
			if (str[i] >= 'a' &&
				str[i] <= 'z')
				str[i] = str[i] - 32;
	}
	return (str);
}
