#include "main.h"

/**
 *_strstr - locates a substring
 *@haystack: string to be searched
 *@needle: substring being searched for
 *Return: pointer or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	/*my method gave segmentation fault, so had to find another*/
	int i;

	for (; haystack[0]; haystack++) /*increments and goes through chars*/
	{
		for (i = 0; haystack[i] == needle[i]; i++)/*looking for ==*/
		{
			; /*empty for loop used to search for element in arr*/
		}
		if (needle[i] == '\0')
		{
			return (haystack);
		}
	}
	return (0);
}
