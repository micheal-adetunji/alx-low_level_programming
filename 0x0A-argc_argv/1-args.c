#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints number of argument passed into it
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: returns 0 on success
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++)
	{
		if (i == (argc - 1))
			printf("%d\n", i);
	}

	return (0);
}
