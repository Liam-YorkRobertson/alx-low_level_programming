#include "main.h"

/**
 *_strncat - concatenates two strings
 *@dest: string to be concatenated to
 *@src: string to concatenate
 *@n: bytes of src it uses at most
 *Return: dest (char)
 */

char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[b] >= n)
	{
		dest[a] = src[b];
		b++;
		a++;
	}
	return (dest);
}
