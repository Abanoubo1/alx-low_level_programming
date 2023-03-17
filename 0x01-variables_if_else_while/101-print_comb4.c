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
	int third = 2;

	while (first <= 7)
	{
		second = 1;
		while (second <= 8)
		{
			third = 2;
			while (third <= 9)
			{
				if (first != second && first < second && second != third && second < third)
				{
					putchar(first + 48);
					putchar(second + 48);
					putchar(third + 48);

					if (first + second + third != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
				third++;
			}
			second++;
		}
		first++;
	}
	putchar('\n');

	return (0);
}
