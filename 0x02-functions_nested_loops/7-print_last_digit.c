#include "main.h"

/**
 * print_last_digit - outputs last digit of an integer
 * @num: integer argument
 *
 * outputs last digit of an integer
 * Return: returns last digit number
 */
int print_last_digit(int num)
{
	num = num % 10;
	if (num < 0)
		num = (num % 10) * -1;
	_putchar(num + '0');
	return (num);
}
