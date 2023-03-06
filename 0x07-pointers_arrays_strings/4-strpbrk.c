#include "main.h"

/**
 *_strpbrk - searches a string for any of an amount of bytes
 *@s: string to search
 *@accept: bytes in the string to look for
 *Return: pointer or null
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
