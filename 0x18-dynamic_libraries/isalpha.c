#include "main.h"

/**
 *_isalpha - function to print alphabet character
 *@c: parameter to be printed
 *Return: 1 if alphabet character, 0 if not
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
