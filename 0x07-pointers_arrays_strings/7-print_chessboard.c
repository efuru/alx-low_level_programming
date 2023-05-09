#include "main.h"

/**
 * print_chessboard - this function  prints chess
 *
 * @a: two dementional arrays
 *
 * Return: nothing
 */

void print_chessboard(char (*a)[8])
{
	int c, e;

	for (c = 0; c < 8; c++)
	{
		for (e = 0; e < 8; e++)
		{
			_putchar(a[c][e]);
		}

		_putchar('\n');
	}
}
