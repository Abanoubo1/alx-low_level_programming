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
	int second = 0;

	while (first <= 98)
	{
		second = first;
		while (second <= 99)
		{
			if (first != second)
			{
				putchar((first / 10) + 48);
				putchar((first % 10) + 48);
				putchar(' ');
				putchar((second / 10) + 48);
				putchar((second % 10) + 48);

				if (first != 98 || second != 99)
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
