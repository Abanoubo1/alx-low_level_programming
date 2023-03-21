#include "main.h"

/**
 *  _abs - Program that prints _putchar
 * followed by a new line
 *
 * @n: checks input of function
 *
 * Return: returns 1 if n is lowercase otherwise always 0 (Success)
 */

int _abs(int n)
{
	if (n < 0)
		n = n * (-1);
	return (n);
}
