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
		if (str[i] == ' ' ||
			str[i] == '\t' ||
			str[i] == '\n' ||
			str[i] == ',' ||
			str[i] == ';' ||
			str[i] == '.' ||
			str[i] == '!' ||
			str[i] == '?' ||
			str[i] == '"' ||
			str[i] == '(' ||
			str[i] == ')' ||
			str[i] == '{' ||
			str[i] == '}')
			if (str[i + 1] >= 'a' &&
					str[i + 1] <= 'z')
				str[i + 1] = str[i + 1] - 32;
	}
	return (str);
}
