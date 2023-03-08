#include "main.h"

/**
 *check_if_prime - checks if prime
 *@num: same as n;
 *@i: iterate from 1
 *Return: 1 if prime, 0 if not
 */

int check_if_prime(int num, int i)
{
	if (num == i)
	{
		return (1);  /*is prime number, since only equals itself and 1*/
	}
	else if (num % i == 0)
	{
		return (0); /*not prime, since divisible by another number*/
	}
	return (check_if_prime(num, i + 1));/*increase i to see if num is prime*/
}

/**
 *is_prime_number - checks if number is prime number or not
 *@n: number to check
 *Return: 1 if is prime number, 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (check_if_prime(n, 2));
}
/*
 *pass n into num, and i is 2 (since we don't want to include 0,
 *and 1, since all prime numbers are divisible by one
 */
