#include "main.h"

/**
 * print_alphabet_x10 - Program that prints _putchar
 * followed by a new line
 * Return: 0 (Success)
 */

void print_alphabet_x10(void)
{
	int num = 0;

	while (num <= 10)
	{
		print_alphabet();
		num++;
	}
	_putchar('\n');
}
