#include "main.h"

/**
 *_strlen - function that prints out the length of a string
 *@s: string to be measured
 *Return: len (length of string)
 */

int _strlen(char *s)
{
	int len = 0;

	for (; *s++;)
	{
		len++;
	}
	return (len);
}
