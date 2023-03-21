#include "main.h"

/**
 * _islower - Program that prints _putchar
 * followed by a new line
 *
 * @c: checks input of function
 *
 * Return: returns 1 if c is lowercase otherwise always 0 (Success)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
