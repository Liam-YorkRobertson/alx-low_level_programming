#include "main.h"

/**
 *_puts - prints a string
 *@str: str to be printed
 *Return: none (void)
 */

void _puts(char *str)
{
	int a;

	for (; *str++;)
	{
		a = *str - 1;
		_putchar(a);
	}
	_putchar('\n');
}
