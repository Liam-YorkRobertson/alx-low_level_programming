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
	/*my solution caused segmentation fault, so had to find another*/
	for (i = 0; haystack[i] >= '\0'; i++)
	{	
		while (haystack[i] == needle[i] && needle[i] != '\0')
		{
			haystack++;
			needle++;
		}
		if (needle[i] == '\0')
		{
			return (haystack);
		}
	}
	return ('\0');
}
