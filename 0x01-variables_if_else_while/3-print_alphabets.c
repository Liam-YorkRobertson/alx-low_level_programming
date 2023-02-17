#include <stdio.h>

/**
 * main - prints alphabet in upper and lower case
 * Return: always 0 (success)
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	for (letter = 'A'; letter <= 'Z'; letter++)
        {
                putchar(letter);
        }
	putchar('\n');
	return (0);
}
