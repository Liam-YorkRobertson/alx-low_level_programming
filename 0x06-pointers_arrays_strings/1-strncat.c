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
	/*using for loops caused errors, so had to find another way*/
	
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++; /*gets len of dest*/
	}
	b = 0;
	while (src[b] != '\0' && b < n)/*appends as long as b < n (bytes we choose)
                                *isbi < n, because we count from 0, E.g. if
                                *n = 5, then 5 iterations is from b=0 to b=4
                                */
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	return (dest);
}
