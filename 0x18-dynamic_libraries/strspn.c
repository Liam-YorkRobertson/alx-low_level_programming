#include "main.h"

/**
 *_strspn - gets the length of a prefix substring (in bytes)
 *@s: string to get prefix from
 *@accept: amount of bytes teh prefix must contain
 *Return: length of prefix substring
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	unsigned int n = 0;

	while (*s) /*dereferences s*/
	{
		for (i = 0; accept[i]; i++) /*bytes of accept*/
		{
			if (*s  == accept[i])
			{
				n++; /*increases the bytes count*/
				break; /*breaks out of loop*/
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
