#include "main.h"

/**
 *print_binary - prints binary from decimal
 *@n: integer to be changed
 *Return: none (void)
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);  /* a recursive call uses shift bit op*/
	}
	_putchar((n & 1) ? '1' : '0');
}
