#include "main.h"

/**
 *_strlen_recursion - prints length of string
 *@s: string to be measured
 *Return: i (length of string)
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
		i = i + _strlen_recursion(s + 1); /*adds each loop to get len*/
	}
	return (i);
}
