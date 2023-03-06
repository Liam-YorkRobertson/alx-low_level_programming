#include "main.h"

/**
 *_strstr - locates a substring
 *@haystack: string to be searched
 *@needle: substring being searched for
 *Return: pointer or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	for (; haystack[0]; haystack++)
	{
		for (i = 0; haystack[i] == needle[i]; i++)
		{
			;
		}
		if (needle[i] == '\0')
		{
			return (haystack);
		}
	}
	return (0);
}
