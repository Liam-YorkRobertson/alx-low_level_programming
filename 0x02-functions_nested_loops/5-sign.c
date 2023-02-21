#include "main.h"

/**
 *print_sign - function that prints the sign of a number
 *@n: parameter to be printed
 *Return: +1 if positive, -1 if negative, 0 if 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		return (+1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (0);
	}
}