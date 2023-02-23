#include "main.h"

/**
 *print_diagonal - print diagonal line
 *@n: number of lines to be printed
 *Return: none (void)
 */

void print_diagonal(int n)
{
	int i;
	int sp;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (sp = 1; sp < i; sp++) /*for spaces before \*/
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
