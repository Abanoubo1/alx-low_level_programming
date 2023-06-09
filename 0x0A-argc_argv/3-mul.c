#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main -  print the result of the multiplication,
 * followed by a new line.
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int a, b = 0;

	if (argc >= 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
		return (0);
	}

	printf("Error\n");

	return (1);
}
