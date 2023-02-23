#include "main.h"

/*
 *print_square - prints a square made of #
 *@size: size of square
 *Return: none (void)
 */

void print_square(int size)
{
	int l;
	int h;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else if (size > 0)
	{
		for (l = 1; l <= size; l++)
		{
			for (h = 1; h <= size; h++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
