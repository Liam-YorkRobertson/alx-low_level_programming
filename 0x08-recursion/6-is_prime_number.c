#include "main.h"

/**
 *is_prime_number - checks if number is prime number or not
 *@n: number to check
 *Return: 1 if is prime number, 0 if not
 */

int is_prime_number(int n)
{
	int i = 2;

	if (n % i == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
