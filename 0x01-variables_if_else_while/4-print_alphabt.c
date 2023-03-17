#include <stdio.h>

/**
* main - Entry point
*
* Description: print alphabet in lowercase except q and e
*
* Return: 0 (End Program)
*/

int main(void)
{
	char bad = 'a';

	while (bad <= 'z')
	{
		if (bad != 'q' && bad != 'e')
			putchar(bad);
		bad++;
	}
	putchar('\n');

	return (0);
}
