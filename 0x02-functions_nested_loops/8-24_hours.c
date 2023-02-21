#include "main.h"

/**
 *jack_bauer - used to print time
 *Return: none (because void)
 */

void jack_bauer(void)
{
	int h = 0;
	int m; /*don't initialize until used in loop*/

	while (h < 24)
	{
		_putchar(h);
		_putchar(':');
		h++;

		m = 0;

		while (m < 60)
		{
			_putchar(m);
			_putchar('\n');
			m++;
		}
	}
}
