#include "main.h"

/**
* main - Entry point
*
* Description: print value of n status; greater than 5,
* is zero or less than 6 and not equal 0
*
* Return: 0 (End Program)
*/

int main(void)
{
	int start = 0;
	char str[] = "_putchar";

	while (start < 8)
	{
		_putchar(str[start]);
		start++;
	}
	_putchar('\n');

	return (0);
}
