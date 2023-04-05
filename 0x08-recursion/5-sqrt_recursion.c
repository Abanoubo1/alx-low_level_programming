#include "main.h"

/**
 * sqrt_recursion_gusser - recurses to find the natural
 * square root of a number.
 *
 * @n: number to calculate the sqaure root
 * @i: iterator number
 *
 * Return: the resulting square root
 */

int sqrt_recursion_gusser(int n, int i)
{
	if (i * i > n)
		return (-1);

	if (i * i == n)
		return (i);
	return (sqrt_recursion_gusser(n, i + 1));
}

/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 *
 * @n: input number
 *
 * Return: square root of a number.
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_recursion_gusser(n, 0));
}
