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
	for (; *haystack != '\0'; haystack ++)
	{
		while (*haystack == *needle && *needle != '\0')
		{
			haystack++;
			needle++;
		}
		if (*needle == '\0')
		{
			return(haystack);
		}
	}
	return ('\0');
}
