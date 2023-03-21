#include "main.h"

/**
 * print_sign - Program that prints _putchar
 * followed by a new line
 *
 * @n: checks input of function
 *
 * Return: returns 1 if n is lowercase otherwise always 0 (Success)
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
