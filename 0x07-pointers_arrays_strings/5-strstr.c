#include "main.h"

/**
 *_strstr - locates a substring
 *@haystack: string to be searched
 *@needle: substring being searched for
 *Return: pointer or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	/*my solution caused segmentation fault, so had to find another*/
	for (; *haystack != '\0'; haystack++)
	{
		char *h = haystack;
		char *n = needle
		
		while (*h == *n && *n != '\0')
		{
			h++;
			n++;
		}
		if (*n == '\0')
		{
			return (haystack);
		}
	}
	return ('\0');
}
