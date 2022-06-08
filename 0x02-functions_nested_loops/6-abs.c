#include "main.h"

/**
 * _abs - outputs absolute value of integer
 * @num: integer argument
 *
 * outputs absolute value of integer
 * Return: returns absolute value
 */
int _abs(int num)
{
	if (num > 0)
	{
		num = num * 1;
		return (num);
	}
	else if (num < 0)
	{
		num = num * -1;
		return (num);
	}
	else
		return (0);
}

