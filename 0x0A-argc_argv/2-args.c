#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments it receives.
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int index = 0;

	while (index < argc)
	{
		printf("%s\n", argv[index]);
		index++;
	}

	return (0);
}
