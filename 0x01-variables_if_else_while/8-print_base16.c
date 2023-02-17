#include <stdio.h>

/**
 * main - print hexidecimal values
 * Return: always success (0)
 */

int main(void)
{
	int number;
	char letter;

	for (number = '0'; number <= '9'; number++)
	{
		putchar(number);
	}

	for (letter = 'a'; letter <= 'f'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
