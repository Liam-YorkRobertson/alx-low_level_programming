#include "main.h"

/**
 *print_line - prints straight line
 *@n: how many line segments
 *Return: none (void)
 */

void print_line(int n)
{
	int i;
	for (i = 1; i <= n; i++)
	{
		if (n > 0)
		{
			_putchar('_');
		}
		else if (n <= 0)
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
