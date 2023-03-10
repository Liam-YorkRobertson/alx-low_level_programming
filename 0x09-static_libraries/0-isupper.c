#include "main.h"

/**
* _isupper - checks if character is uppercase or not
* @c: parameter to be printed
* Return: always 0 (success)
*/

int _isupper(int c)
{

	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else if (c >= 97 && c <= 122)
	{
		return (0);
	}
	return (0);
}
