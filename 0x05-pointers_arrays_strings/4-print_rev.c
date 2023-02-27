#include "main.h"

/**
 *print_rev - prints string in reverse
 *@s: string to be printed
 *Return: none (void)
 */

void print_rev(char *s)
{
	int a = 0;
	int b;

	while (s[a] != '\0')
	{
		a++;
	}
	for (b = a - 1; b >= 0; b--) /*-1 makes it start from behind*/
	{
		_putchar(s[b]);
	}
	_putchar('\n');
}
