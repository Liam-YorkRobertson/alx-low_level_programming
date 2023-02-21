#include "main.h"

/**
 *print_last_digit - prints last digit of number
 *@r: parameter to be printed
 *Return: return r modulus 10 to get the last digit(remainder)
 */

int print_last_digit(int r)
{
	return (r % 10);
	_putchar(r % 10); 
}
