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

	dup = malloc(sizeof(char) * i); /*allocate mem*/

	if (str == NULL || dup == NULL)
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
