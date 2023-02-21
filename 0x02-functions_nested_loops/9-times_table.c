#include "main.h"

/**
 *times_table - prints 9 times table
 *Return: none (void)
 */

void times_table(void)
{
	int h = 0;
	int v;

	while (h <= 9)
	{
		v = 0;

		while (v <= 9)
		{
			_putchar(h * v + '0');
			_putchar(',');
			_putchar(' ');
			v++;
		}
		_putchar('\n');
		h++;
	}
}
