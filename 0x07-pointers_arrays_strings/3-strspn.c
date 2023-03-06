#include "main.h"

/**
 *_strspn - gets the length of a prefix substring (in bytes)
 *@s: string to get prefix from
 *@accept: amount of bytes teh prefix must contain
 *Return: length of prefix substring
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	unsigned int n = 0;

	while (*s)
	{
		for (; accept[i]; i++)
		{
			if (*s  == accept[i])
			{
				n++;
				break;
			}
			else if (accept[i + 1] == '\0')
			{
				return (n);
			}
		}
		s++;
	}
	return (n);
}
