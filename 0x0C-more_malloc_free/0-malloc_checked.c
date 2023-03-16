#include "main.h"
#include <stdlib.h>

/**
 *malloc_checked - allocates memory using malloc
 *@b: int for which mem is allocated
 *Return: pointer to mem
 */

void *malloc_checked(unsigned int b)
{
	char *m;

	m = malloc(sizeof(char) * b);
	if (m == NULL)
	{
		exit(98); /*cases normal process termination (task req.)*/
	}
	return (m);
}
