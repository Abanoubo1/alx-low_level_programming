#include "main.h"
/**
 * chessbord - this Entry Point
 * @a : its array
 * Return: always 0 if (success)
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
			_puthar(a[i][j]);
		_putchar('\n')
	}





}
