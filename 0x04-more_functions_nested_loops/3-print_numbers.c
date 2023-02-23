#include "main.h"

/**
 *print_numbers - prints 0 to 9
 *Return: none (void)
 */

void print_numbers(void)
{
	char c = '0';

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
