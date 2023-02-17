#include <stdio.h>

/**
 * main - print single digits
 * Return: always 0 (success)
 */

int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num ++)
	{
		putchar(num);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return(0);
}
