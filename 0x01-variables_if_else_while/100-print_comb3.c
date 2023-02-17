#include <stdio.h>

/**
 * main - print combinations of two digits
 * Return: always 0 (success)
 */

int main(void)
{
	int num1, num2;

	for (num1 = '0'; num1 < '9'; num1++)
	{
		for (num2 = '1'; num2 <= '9'; num2++)
		{
			putchar(num1);
			putchar(num2);
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
