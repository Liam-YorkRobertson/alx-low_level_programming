#include "main.h"

/**
 *print_line - prints straight line
 *@n: how many line segments
 *Return: none (void)
 */

void print_line(int n)
{
	int i = 0;
	for (i = 0; i <= n; i++)
	{
		if (n > 0)
		{
			_putchar(95);
		}
		else
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
