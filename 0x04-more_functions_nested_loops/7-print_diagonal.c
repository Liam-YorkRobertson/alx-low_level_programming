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

	for (i = 1; i <= n; i++)
	{
		if (n > 0)
		{
			for (sp = 1; sp > n; sp++) /*for spaces before \*/
			{
				_putchar(' ');
			}
			_putchar('\\');
		}
		else if (n <= 0)
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
