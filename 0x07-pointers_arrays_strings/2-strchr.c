#include "main.h"

/**
 *_strchr - find the first occurence of a character in a string
 *@s: string that we are searching in
 *@c: character we're looking for
 *Return: pointer to first occurence of char, or null if no occurence
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	if (s[i] == c)
	{
		return (s);
	}
	else
	{
		return ('\0');
	}
}
