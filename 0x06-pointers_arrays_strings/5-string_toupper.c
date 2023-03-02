#include "main.h"

/**
 *string_toupper - converts string to uppercase
 *@str: string to be converted
 *Return: char (n)
 */

char *string_toupper(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
			i++;
		}
	}
	return (str);
}
