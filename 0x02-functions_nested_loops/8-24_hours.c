#include "main.h"

/**
 *jack_bauer - used to print time
 *Return: none (because void)
 */

void jack_bauer(void)
{
	int h;
	int m;

	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; h++)
		{
			_putchar(h + '0');
			_putchar(':');
			_putchar(m + '0');
			_putchar('\n');
		}
	}

}
