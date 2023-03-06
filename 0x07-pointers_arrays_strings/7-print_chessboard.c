#include "main.h"

/**
 *print_chessboard - function that prints a chess board
 *@a: array
 *Return: none (void)
 */

void print_chessboard(char (*a)[8])
{
	/*similar to notes made see them*/
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]); /*printing out each element*/
		}
		_putchar('\n');
	}
}
