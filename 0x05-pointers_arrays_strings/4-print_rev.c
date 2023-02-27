#include "main.h"

/**
 *print_rev - prints string in reverse
 *@s: string to be printed
 *Return: none (void)
 */

void print_rev(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		_putchar(s[a]);
		a--;
	}
	_putchar('\n');
}
