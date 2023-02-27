#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string to be halved
 * return : none (void)
 */

void puts_half(char *str)
{
	int i = 0;

	while (*str != '\0') /*essentially gets len of string*/
	{
		i++;
		str++;
	}

	str -= (i / 2); /*halves str*/
	while (*str != '\0') /*prints the half of str (above)*/
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
