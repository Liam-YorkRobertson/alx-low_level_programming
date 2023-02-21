#include "main.h"

/**
 * main - prints alphabet
 * Return: none, becuase void return_type
 */

void print_alphabet(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		_putchar(alph);
	}
	_putchar('\n');
}
