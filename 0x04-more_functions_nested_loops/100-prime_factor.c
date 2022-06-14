#include <stdio.h>

/**
 * main - outputs largest prime factor
 *
 * Return: returns 0 on success
 */
int main(void)
{
	long int large_prime, i = 2, n = 612852475143;

	while (n != 1)
	{
		if ((n % i) == 0)
		{
			while ((n % i) == 0)
				n /= i;
			large_prime = i;
		}
		i++;
	}
	printf("%ld\n", large_prime);
	return (0);
}

