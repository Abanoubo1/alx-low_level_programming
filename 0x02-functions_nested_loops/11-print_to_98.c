#include"main.h"

/**
 * print_to_98 - print n to 98 counts
 *           separated by comma, followed
 *           by space and number should be
 *           printed in order
 *
 * @n: user input
*/

void print_to_98(int n)
{
	int index = 0;

	if (n > 98)
	{
		while (index > 98)
		{
			printf("%d, ", i);
			index--;
		}
	}
	else
	{
		while (index < 98)
		{
			printf("%d, ", i);
			index++;
		}
	}
	printf("98\n");
}
