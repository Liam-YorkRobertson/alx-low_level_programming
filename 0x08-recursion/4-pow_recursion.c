#include "main.h"

/**
 *_pow_recursion - gets the value of x to the power of y
 *@x: base
 *@y: power
 *Return: 1 if y = 0, -1 if y < 0, or x ^ y
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y == 1)
	{
		return (x);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
