#include "main.h"

/**
 *_abs - prints absolute value of number
 *@r: parameter to be printed
 *Return: int if number is positive or 0, or -(int) if negative
 */

int _abs(int r)
{
	if (r >= 0)
	{
		return (r);
	}
	else
	{
		return (-(r));
	}
}
