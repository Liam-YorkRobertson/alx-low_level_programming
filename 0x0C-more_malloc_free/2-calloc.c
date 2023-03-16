#include "main.h"
#include <stdlib.h>

/**
 *_calloc - allocates mem for array with malloc
 *@nmemb: number of elements
 *@size: size of bytes
 *Return: pointer to array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *m;
	unsigned int i; /*same as other ints above*/

	if (nmemb == 0 || size == 0) /*task req*/
	{
		return (NULL);
	}

	m = malloc(size * nmemb); /*size is size of bytes, replaces sizeof*/
	if (m == NULL) /*task req*/
	{
		return (NULL);
	}
	for (i = 0; i < (nmemb * size); i++)/*prints array*/
	{
		m[i] = 0; /*mem set to 0*/
	}
	return (m);
}
