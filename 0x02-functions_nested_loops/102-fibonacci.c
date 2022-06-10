#include <stdio.h>

/**
 * main - outputs number
 *
 * outputs first 50 fibonacci numbers
 * starting from 1 and 2
 * Return: returns 0
 */
int main(void)
{
	long int num1, num2, next;
	int n;

	num1 = 1;
	num2 = 2;
	next = num1 + num2;
	printf("%ld, %ld, ", num1, num2);
	for (n = 3; n <= 50; n++)
	{
		printf("%ld", next);
		num1 = num2;
		num2 = next;
		next = num1 + num2;
		if (n < 50)
			printf(", ");
	}
	printf("\n");
	return (0);
}
