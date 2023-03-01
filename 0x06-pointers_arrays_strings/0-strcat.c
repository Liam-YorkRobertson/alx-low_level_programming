#include "main.h"

/**
 *_strcat - concatenates two strings
 *@dest: first half of string
 *@src: second half of string
 *Return: dest + '\0' (returns a char)
 */

char *_strcat(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		b++;
		a++;
	}
	return (dest + '\0');
}
