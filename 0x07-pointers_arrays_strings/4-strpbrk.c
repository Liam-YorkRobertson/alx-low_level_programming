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

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == accept[i])
		{
			return (&s[i]);
		}
	}
	return ('\0');
}
