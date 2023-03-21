#include "main.h"

/**
 * print_alphabet_x10 - Program that prints _putchar
 * followed by a new line
 * Return: 0 (Success)
 */

void print_alphabet_x10(void)
{
	int num1 = 0;

	while (num1 <= 9)
	{
		int num = 'a';

		while (num <= 'z')
		{
			_putchar(num);
			num++;
		}
		_putchar('\n');
		num1++;
	}
}
