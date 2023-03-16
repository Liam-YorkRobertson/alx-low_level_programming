#include "main.h"
#include <stdlib.h>

/**
 *_realloc - reallocates a block of memory
 *@ptr: pointer to previous mem block
 *@old_size: old size of mem block
 *@new_size: new size of mem block
 *Return: return pointer to new mem block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	/*for this one just follow the task reqs*/
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		malloc(new_size);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	free(ptr);
	ptr = malloc(new_size);
	return (ptr);
}
