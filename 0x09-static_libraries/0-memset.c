#include "main.h"

/**
 *_memset - fills memory with a constant byte
 *@s: memory area pointed to
 *@n: amount of bytes to be change
 *@b: constant byte
 *Return: s (changed array)
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b; /*value of n array element = b bytes*/
		n--; /*n decrements every loop, until n bytes is 0*/
	}
	return (s);
}
