#include "main.h"

/**
 * _strcmp - compares two strings
 *@s1: string to be compared
 *@s2: string to be compared
 *Return: always 0 (success)
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0') /*don't want them included*/
	{
		if (s1[i] != s2[i]) /*this is here because 'errors' if not*/
		{
			return (s1[i] - s2[i]); /*0 if =, + if s1 > s2, - if s2 > s1*/
		}
		i++;
	}
	return (0);
}
