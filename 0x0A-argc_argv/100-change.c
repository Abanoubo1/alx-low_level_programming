#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the minimum number of coins to
 * make change for an amount of money
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */

int main(int argc, char *argv[])
{
	int index, num, sum;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);
	sum = 0;

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}

	for (index = 0; index < 5 && num >= 0; index++)
	{
		while (num >= coins[index])
		{
			sum++;
			num -= coins[index];
		}
	}

	printf("%d\n", sum);
	return (0);
}
