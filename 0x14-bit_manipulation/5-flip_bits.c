#include "main.h"

/**
 *flip_bits - returns the number of bits you would need to flip num
 *@n: first input num
 *@m: second input num
 *Return: amount of bits needed to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i;
	unsigned long int XORres;

	XORres = n ^ m; /*does xor, so has 1 where the 2 input ints differ*/

	i = 0;
	while (XORres)
	{
		i = i + (XORres & 1); /*compares last last digit to 1*/
		/*if result is 1, increments count by one bits*/
		XORres = XORres >> 1; /*shifts to right to compare next bit*/
	}

	return (i);
}
