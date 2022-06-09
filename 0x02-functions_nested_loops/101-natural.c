#include <stdio.h>

/**
 * main - output sum
 *
 * output sum of all nat num multiple of 3 & 5 below 1024
 * Return: return 0
 */
int main(void)
{
	int n;
	int s;

	s = 0;
	for (n = 0; n < 1024; n++)
	{
		if (((n % 3) == 0) || ((n % 5) == 0))
			s = s + n;
	}
	printf("%d\n", s);
	return (0);
}
