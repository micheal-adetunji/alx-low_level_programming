#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - main out numbers +ve.-ve or zero
 *
 * outputs numbers randomly
 * Return: outputs zero
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);
	/* your code goes there */
	return (0);

}
