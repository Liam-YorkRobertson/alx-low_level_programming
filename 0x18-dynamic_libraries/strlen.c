#include "main.h"

/**
 *_strlen - function that prints out the length of a string
 *@s: string to be measured
 *Return: len (length of string)
 */

int _strlen(char *s)
{
	int len = 0;

	for (; *s++;) /*infinite loop, only increments to get len*/
	{
		len++; /*actually counts from 0*/
	}
	return (len);
}
