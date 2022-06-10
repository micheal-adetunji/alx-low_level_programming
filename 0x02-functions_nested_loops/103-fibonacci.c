#include <stdio.h>

/**
 * main - output sum of fibbo-even numbers
 *
 * output sum of fibbo-even numbers below 4000000
 * Return: returns 0
 */
int main(void)
{
	unsigned long int num, num1, next, s;
	int n;

	num = 1;
	num1 = 2;
	s = 0;
	for (n = 1; n <= 33; n++)
	{
		if (num < 4000000 && (num % 2) == 0)
			s = s + num;
		next = num + num1;
		num = num1;
		num1 = next;
	}
	printf("%lu\n", s);
	return (0);
}
