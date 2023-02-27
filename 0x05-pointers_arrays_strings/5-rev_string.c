#include "main.h"

/**
 *rev_string - reverses a string
 *@s: string to be reversed
 *return: none (void)
 */

void rev_string(char *s)
{
	int a = 0;
	int i;
	char rev = s[0];

	while (s[a] != '\0')
	{
		a++;
	}
	for (i = 0; i < a; i++)
	{
		a--;
		rev = s[i];
		s[i] = s[a];
		s[a] = rev;
	}
}
