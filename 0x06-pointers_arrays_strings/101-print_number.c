#include "main.h"

/**
 *print_number - prints integer using putchar
 *@n: integer to be printed
 *Return: none (void)
 */

void print_number(int n)
{
	int num;

	num = n;
	if (n < 0) /*print sign, but we don't want to use it in calculations*/
	{
		_putchar('-');
		num = -n; /*is now positive*/
	}
	if (num / 10 != 0)/*if not / 10 , then run through function again*/
	{
		print_number(num / 10);
	}
	_putchar((num % 10) + '0');
}
