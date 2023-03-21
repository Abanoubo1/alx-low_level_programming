#include "main.h"

/**
 * print_to_98 - Program that prints _putchar
 * followed by a new line
 *
 * @n: checks input of function
 *
 * Return: a + b
 */

void print_to_98(int n)
{
	int count;

		if (n > 98)

		for (int i = n; i > 98; i--)
			printf("%d, ", i);
		else

		for (int i = n; i < 98; i++)
			printf("%d, ", i);
			printf("98\n");
}
