#include "main.h"

/**
 *
 *
 *
 */

void rev_string(char *s)
{
	int a = 0;
	int i;

	while (s[a] != '\0')
	{
		a++;
	}
	for (i = a - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
