#include "main.h"

/**
 *_strcat - concatenates two strings
 *@dest: first string
 *@src: second string
 *Return: dest + '\0' (char)
 */

char *_strcat(char *dest, char *src)
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
	for (i = 0; i <= slen; i++) /*appends as long as i <= slen*/
	{
		dest[dlen + i] = src[i]; /**dlen + i, because we want to add
		*src to the end of dest, if it wasn't + i, then would overwrite dest
		*/
	}
	return (dest);
}
