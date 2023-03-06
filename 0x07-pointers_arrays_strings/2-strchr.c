#include "main.h"

/**
 *_strchr - find the first occurence of a character in a string
 *@s: string that we are searching in
 *@c: character we're looking for
 *Return: pointer to first occurence of char, or null if no occurence
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		else
		{
			return ('\0');
		}
	}
	return (0);
}
