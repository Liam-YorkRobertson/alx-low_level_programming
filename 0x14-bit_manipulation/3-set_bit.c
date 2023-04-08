#include "main.h"

/**
 *set_bit - programme that sets the value of a bit to 1 at a given index
 *@n: pointer to value whose bit will be changed
 *@index: index point
 *Return: return the changed value
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	int swapBitAtIndex;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	swapBitAtIndex = 1 << index; /*shifts 1 to left until index point*/
	*n = *n | swapBitAtIndex; /*OR will always be 1 here*/

	return (*n);
}
