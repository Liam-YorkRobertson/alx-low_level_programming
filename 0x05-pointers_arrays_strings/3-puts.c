#include "main.h"

/**
 *_puts - prints a string
 *@str: str to be printed
 *Return: none (void)
 */

void _puts(char *str)
{
	for (; *str++;)
	{
		_putchar(*str - 1);
	}
	_putchar('\n');
}
