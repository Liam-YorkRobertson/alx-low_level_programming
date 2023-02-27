#include "main.h"

/**
 *_puts - prints a string
 *@str: str to be printed
 *Return: none (void)
 */

void _puts(char *str)
{
	int a = 0;

	while (str[a] != '\0') /*while the value of the string isn't end point*/
	{
		_putchar(str[a]); /* print each character */
	}
	_putchar('\n');
}
