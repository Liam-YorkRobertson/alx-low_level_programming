#include <stdio.h>

/**
 *main - prints i, Fizz, Buzz, FizzBuzz
 *Return: always 0 (success)
 */

int main(void)
{
	int i;
	char fizz[] = "Fizz";
	char buzz[] = "Buzz";
	char fizzbuzz[] = "FizzBuzz";

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("%s ", fizzbuzz);
		}
		else if (i % 3 == 0)
		{
			printf("%s ", fizz);
		}
		else if (i % 5 == 0)
		{
			printf("%s ", buzz);
		}
		else
		{
			printf("%d ", i);
		}
	}
	return (0);
}
