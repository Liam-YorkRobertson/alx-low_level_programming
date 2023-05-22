#include "main.h"

/**
 *_memcpy - copies memory area
 *@dest: where to copy memory to
 *@src: where to copy memory from
 *@n: amount of bytes we change
 *Return: dest (appended memory area)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		dest[i] = src[i]; /*appends src to dest*/
		n--; /*decrements and runs for each byte*/
	}
	return (dest);
}
