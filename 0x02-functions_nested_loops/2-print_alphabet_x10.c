#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10 times
 * Return: none (because void)
 */

void print_alphabet_x10(void)
{
	int line = 0;
	char alpha;

	while (line < 10)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		};
		_putchar('\n');
		line++;
	}
}
