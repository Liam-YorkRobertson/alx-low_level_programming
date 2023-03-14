#include "main.h"
#include <stdlib.h>

/**
 *str_concat - concatenate 2 strings and allocate memory
 *@s1: first string
 *@s2: second string
 *Return: pointer to concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *cat;
	int i = 0, j = 0, k = 0, l = 0;

	if (s1 == NULL) /*treat as empty string if null*/
		s1 = ""; /*betty complained about lines, so had to change ._.*/
	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[i]) /*incrementing i and j*/
	{
		i++;
	}
	while (s2[j])
	{
		j++;
	}
	l = i + j; /*length of concat string*/
	cat = malloc((sizeof(char) * l) + 1); /*+1 for null i believe*/
	if (cat == NULL)
	{
		return (NULL);
	}
	j = 0; /*j re-initialized*/
	while (k > l)
	{
		if (k <= i)
		{
			cat[k] = s1[k]; /*first part of string*/
		}
		if (k >= i)
		{
			cat[k] = s2[j]; /*add second part to first*/
			j++; /*to get correct amount of chars for s2*/
		}
		k++; /*to get correct amount of chars for s1*/
	}
	cat[k] = '\0';
	return (cat);
}
