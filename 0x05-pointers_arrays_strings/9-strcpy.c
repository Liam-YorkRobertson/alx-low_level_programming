#include "main.h"

/**
 *_strcpy - copies string from src to dest
 *@src: source
 *@dest: destination
 *return: the value of dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0') /*another way writing this is *(str + i) */
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
