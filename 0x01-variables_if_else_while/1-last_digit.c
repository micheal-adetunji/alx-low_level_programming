#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - outputs number randomly and their remainder
 *
 * outputs numbers
 * Return: returns 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if ((n % 10) > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);
	else if (n < 6 && n != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);
	else
		printf("Last digit of %d is %d and is 0\n", n, n % 10);
	/* your code goes there */
	return (0);
}
