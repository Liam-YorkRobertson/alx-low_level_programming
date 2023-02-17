#include <stdio.h>

/**
 * main - prints alphabet, without q and e
 * Return: always 0 (success)
 */

int main(void) 
{
	char letter;

	for (letter = 'a'; letter <='z', letter != 'q', 'e'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
