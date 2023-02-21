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
		for (m = 0; m < 60; m++)
		{
			_putchar(h / 10 + '0'); /**
						*e.g. 21/10 is 2,because 21/10
						*is 2.1, but is int so no decimal
						*/
			_putchar(h % 10 + '0'); /* % 10 is used to get last digit */
			_putchar(':');
			_putchar(m / 10 + '0'); /*same principle as above*/
			_putchar(m % 10 + '0'); /*same principle as above*/
			_putchar('\n');
		}
	}

}
