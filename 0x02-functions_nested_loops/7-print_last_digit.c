#include "main.h"

/**
 *print_last_digit - prints last digit of number
 *@r: parameter to be printed
 *Return: return r modulus 10 to get the last digit(remainder)
 */

int print_last_digit(int r)
{
	int m;

	m = r % 10;
	if (r < 0)
	{
		m = -m;
	}
	_putchar(m + '0');
	return (m);
}
