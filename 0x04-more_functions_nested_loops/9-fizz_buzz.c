#include <stdio.h>

/**
 * main - outputs 1 - 100
 *
 * multiple of 3 = Fizz, multiple of 5 = Buzz,
 * multiple of both = FizzBuzz
 * Return: returns 0 on success
 */
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (((n % 5) == 0) && ((n % 3) == 0))
			printf("FizzBuzz");
		else if ((n % 3) == 0)
			printf("Fizz");
		else if ((n % 5) == 0)
			printf("Buzz");
		else
			printf("%d", n);
		if (n < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
