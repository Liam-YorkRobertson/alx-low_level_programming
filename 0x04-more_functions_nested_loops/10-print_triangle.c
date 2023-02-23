#include "main.h"

/**
 *print_triangle - makes triangle
 *@size: size of triangle
 *Return: none (void)
 */

void print_triangle(int size)
{
	int l;
	int t;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else if (size > 0)
	{
		for (l = size; l > 0; l--)
		{
			for  (t = 1; t <= size; t++)
			{
				if (l > t)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
}
