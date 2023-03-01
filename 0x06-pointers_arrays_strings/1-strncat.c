#include "main.h"

/**
 *_strncat - concatenates two strings
 *@dest: string to be concatenated to
 *@src: string to concatenate
 *@n: number of characters to append
 *Return: dest (char)
 */

char *_strncat(char *dest, char *src, int n)
{
	int dlen = 0;
	int slen = 0;
	int i;

	for (i = 0; dest[i] != '\0'; i++)
	{
		dlen++; /*gets len of dest*/
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		slen++; /*gets len of src*/
	}
	for (i = 0; i < n; i++) /*appends as long as i < n (bytes we choose)
				*is i < n, because we count from 0, E.g. if
				*n = 5, then 5 iterations is from i=0 to i=4
				*/
	{
		dest[dlen + i] = src[i]; /**dlen + i, because we want to add
		*src to the end of dest, if it wasn't + i, then would overwrite dest
		*/
	}
	return (dest + '\0');
}
