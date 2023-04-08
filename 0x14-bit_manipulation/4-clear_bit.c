#include "main.h"

/**
 *clear_bit - changes bit at index to 0
 *@n: number to be changed
 *@index: index of bit to be changed
 *Return: 1 (success), -1 (failure)
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	int swapBitTo0;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	swapBitTo0 = ~(1 << index); /*ones everywhere else except 0 at index*/
	*n = *n & swapBitTo0; /*is always 0, since cannot have two 1's*/

	return (1);
}
