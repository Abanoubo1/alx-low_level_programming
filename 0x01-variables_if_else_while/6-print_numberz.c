#include <stdio.h>

/**
* main - Entry point
*
* Description: print all single digit numbers as char
*
* Return: 0 (End Program)
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		putchar('0' + digit);
		digit++;
	}
	putchar('\n');

	return (0);
}
