#include "main.h"

/**
 *print_most_numbers - prints 0 to 9, except 2 and 4
 *Return: none (void)
 */

void print_most_numbers(void)
{
	char c = '0';

	for (c = '0'; c <= '9'; c++)
	{
		if (c != '2' && c != '4')
		{
			_putchar(c);
		}
	}
	_putchar('\n');
}
