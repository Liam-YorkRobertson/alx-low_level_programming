#include "search_algos.h"

/**
 *binary_search - searches for a value in a sorted  array of integers
 *using the binary search algorithm
 *@array: array to search in
 *@size: number of elements in array
 *@value: value to search for
 *Return: returns -1 if null or value not found
 */

int binary_search(int *array, size_t size, int value)
{
	int i, left = 0, right = size - 1, middle;

	if (array == NULL)
	{
		return (-1);
	}

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			if (i == left)
			{
				printf("%d", array[i]);
			}
			else
			{
				printf(", %d", array[i]);
			}
		}
		printf("\n");

		middle = left + (right - left) / 2;

		if (array[middle] == value)
		{
			return (middle);
		}
		else if (array[middle] < value)
		{
			left = middle + 1;
		}
		else
		{
			right = middle - 1;
		}
	}
	return (-1);
}
