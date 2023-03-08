#include "main.h"

/**
 *factorial - gives factorial of a number
 *@n: number to get the factorial of
 *Return: 1 if 1 or 0, -1 if < 0, factorial of n
 */

int factorial(int n)
{
	if (n == 1 || n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
