#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds all numbers passed into the program
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: returns 0 on success and 1 otherwise
 */
int main(int argc, char *argv[])
{
	int result = 0, i, j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		result += atoi(argv[i]);
	}
	printf("%d\n", result);
	return (0);
}
