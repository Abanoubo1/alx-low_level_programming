#include "main.h"

/**
 * print_alphabet- Program that prints _putchar
 * followed by a new line
 * Return: 0 (Success)
 */

void print_alphabet(void)
{
	int num = 'a';

	while (num <= 'z')
	{
		_putchar(num);
		num++;
	}

	_putchar('\n');
}
