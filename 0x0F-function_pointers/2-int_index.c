#include "function_pointers.h"

/**
 *int_index - searches for an int
 *@array: array to search in
 *@size: size of the array
 *@cmp: pointer to function used to compare values
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i])) /*if array[i] exists then return i*/
		{
			return (i);
		}
	}
	return (1);
}
