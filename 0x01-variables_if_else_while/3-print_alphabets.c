#include <stdio.h>

/**
* main - Entry point
*
* Description: print alphabet in lowercase and Upercase
*
* Return: 0 (End Program)
*/

int main(void)
{
	char bad = 'a';
	char Bad = 'A';

	while (bad <= 'z')
	{
		putchar(bad);
		bad++;
	}

	while (Bad <= 'Z')
	{
		putchar(Bad);
		Bad++;
	}
	putchar('\n');

	return (0);
}
