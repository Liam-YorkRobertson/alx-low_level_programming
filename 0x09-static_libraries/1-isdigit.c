#include "main.h"

/**
 *_isdigit - checks if is digit or not
 *@c: parameter to be entered
 *Return: always 0 (success)
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
