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
	int j = 0;

	for (; s[i] >= '\0'; i++)/*>= NULL, because is lowest ascii char*/
	{
		if (s[i] == accept[i])
		{
			j = j + 1; /*counts how manay times =*/
		}
	}
	return (j);
}
