#include "main.h"

/**
 *more_numbers - prints 0 to 14 ten times
 *Return: none (void)
 */

void more_numbers(void)
{
	int row = 0;

	while (row <= 9)
	{
		int c = 0;

		for (c = 0; c <= 14; c++)
		{
			if (c >= 10)
			{
				_putchar((c / 10) + '0'); /*this adds a 1 before next character*/
			}
			_putchar((c % 10) + '0'); /*converts int to char*/
		}
		_putchar('\n');
		row++;
	}
}
