#include "main.h"

/**
 *_strpbrk - searches a string for any of an amount of bytes
 *@s: string to search
 *@accept: bytes in the string to look for
 *Return: pointer or null
 */

char *_strpbrk(char *s, char *accept)
{
	/*similar to previous task*/
	int i;

	while (*s) /*dereferenced*/
	{
		for (i = 0; accept[i]; i++) /*run loop for each i char*/
		{
			if (*s == accept[i])
			{
				return (s); /*return equal char*/
			}
		}
		s++; /*run loop for next s char*/
	}
	return ('\0');
}
