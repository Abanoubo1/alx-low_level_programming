#include "main.h"

/**
 * main - Program that prints _putchar
 * followed by a new line
 * Return: 0 (Success)
 */

int main(void)
{
	int num = 0;

	while (num <= 10)
	{
		print_alphabet();
		num++;
	}
	_putchar('\n');
	return (0);
}
