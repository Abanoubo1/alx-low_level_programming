#include <stdio.h>

/**
* main - Entry point
*
* Description: print reverse alphabet in lowercase
*
* Return: 0 (End Program)
*/

int main(void)
{
	char bad = 'z';

	while (bad >= 'a')
	{
		putchar(bad);
		bad--;
	}
	putchar('\n');

	return (0);
}
