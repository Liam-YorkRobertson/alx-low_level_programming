#include "main.h"
#include <stdlib.h>

/**
 *createa_array - creates an array
 *@size: size of memory for array
 *@c: chars of array
 *Return: address of arr
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i; /*got error, so made unsigned*/

	arr = malloc(sizeof(char) * size);

	if (size == 0 || arr == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
