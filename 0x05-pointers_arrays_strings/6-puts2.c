#include "main.h"

/**
 * puts2 -  prints every second number
 * @str: number to be split
 * return: none (void)
 */

void puts2(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		else
		{
			continue; /*break stops the whole execution*/
		}
	}
	_putchar('\n');
}
