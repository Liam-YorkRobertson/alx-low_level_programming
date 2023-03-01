#include "main.h"

/**
 *_strncopy - copies a string
 *@dest: input string
 *@src: input string
 *@n: amount of characters
 *Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	/*using while loops instead of for loops (errors)*/
	int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
	}
	return (dest);
}
