#include "main.h"
#include <stdlib.h>

/**
 *_strdup - duplicate string to newly allocated space
 *@str: string to duplicate
 *Return: pointer to string
 */

char *_strdup(char *str)
{
	char *dup;
	unsigned int i = 1;
	unsigned int j = 0;

	while (str[i]) /*incremetn i for each char of str*/
	{
		i++;
	}

	if (str == NULL) /*had to split original funciton to this (seg fault)*/
	{
		return (NULL);
	}

	dup = malloc((sizeof(char) * i) + 1); /*allocate mem, had error so +1*/
	/*prob had to add +1 for a null character*/

	if (dup == NULL)
	{
		return (NULL);
	}

	while (j < i)
	{
		dup[j] = str[j];
		j++;
	}
	dup[j] = '\0';
	return (dup);
}
