#include <stdio.h>

/**
* main - Entry point
*
* Description: prints all possible different combinations of two digits
*
* Return: 0 (End Program)
*/

int main(void)
{
	int first = 0;
	int second = 1;

	while (first <= 8)
	{
		second = 0;
		while (second <= 9)
		{
			if (first != second && first < second)
			{
				putchar(first + 48);
				putchar(second + 48);

				if (first + second != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			second++;
		}
		first++;
	}
	putchar('\n');

	return (0);
}
