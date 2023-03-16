#include "main.h"
#include <stdlib.h>

/**
 *string_nconcat - concatenates two strings (n bytes of second)
 *@s1: string to be concatenated
 *@s2: string to be concatenated
 *@n: amount of bytes of s2 to concat to s1
 *Return: pointer to string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	/*betty complains about lines, had to remove some {}*/
	char *strout;
	unsigned int is1, is2, tot, i; /*n is unsigned, so make these same*/

	if (s1 == NULL) /*if null then empty string*/
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (is1 = 0; s1[is1] != '\0'; is1++) /*increments is1 to amount char in s1*/
	{
		;
	}
	for (is2 = 0; s2[is2] != '\0'; is2++)
	{
		;
	}
	if (n > is2) /*use entire s2 if n >=, using amount of char,not chars*/
	{
		n = is2;
	}
	tot = is1 + n; /*total length of new string*/
	strout = malloc(sizeof(char) * tot + 1); /*alloc mem for new str*/
	/*+1 above is for null char*/
	if (strout == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < tot; i++) /*concatenation function*/
	{
		if (i < is1)/*if no s2 basically*/
		{
			strout[i] = s1[i];
		}
		else
		{
			strout[i] = s2[i - is1];
		}
	}
	strout = '\0';
	return (strout);
}
