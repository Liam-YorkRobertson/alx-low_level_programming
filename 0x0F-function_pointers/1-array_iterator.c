#include "function_pointers.h"

/**
 *array_iterator - execute function on each element in an array
 *@array: array to iterate
 *@size: amount of elements in the array
 *@action: pointer function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i; /*has to be unsigned, because size_t is*/

	if (array == NULL || action == NULL) /*can't compare size*/
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
