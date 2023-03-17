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

	while (bad <= 'z')
	{
		putchar(bad);
		bad++;
	}
	putchar('\n');

	return (0);
}
