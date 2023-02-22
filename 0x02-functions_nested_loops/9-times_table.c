#include "main.h"

/**
 *times_table - prints 9 times table
 *Return: none (void)
 */

void times_table(void)
{
	int c, r, p;

	for (c = 0; c <= 9; c++)
	{
		_putchar('0');

		for (r = 1; r <= 9; r++)
		{
			_putchar(',');
			_putchar(' ');

			p = c * r;

			if (p <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((p / 10) + '0');
			}
			_putchar((p % 10) + '0');
		}
		_putchar('\n');
	}
}
