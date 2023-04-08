#include "main.h"

/**
 *get_bit - returns value of a bit at index
 *@n: number to get bit from
 *@index: index to get bit
 *Return: the bit at teh specified index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bitAtIndex;

	if (index >= sizeof(unsigned long int) * 8) /*basically 64*/
	{
		return (-1);  /*if >= 64, then error*/
	}

	bitAtIndex = (n >> index) & 1;
	return (bitAtIndex);
}
