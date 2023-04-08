#include "main.h"

/**
 *
 *
 *
 *
 */

void print_binary(unsigned long int n)
{
	if (n > 1) 
	{
		print_binary(n >> 1);  /* a recursive call */
	}
	_putchar((n & 1) ? '1' : '0');
}
