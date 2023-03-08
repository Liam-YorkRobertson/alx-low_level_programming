#include "main.h"

/**
 *_print_rev_recursion - prints string in reverse
 *@s: string to be reversed
 *Return: none (void)
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s - 1);
		_print_rev_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
