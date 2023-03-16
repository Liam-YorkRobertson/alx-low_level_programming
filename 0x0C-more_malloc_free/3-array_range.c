#include "main.h"
#include <stdlib.h>

/**
 *array_range - creates an array of integers
 *@min: min value
 *@max: max value
 *Return: pointer to array
 */

int *array_range(int min, int max)
{
	int *m;
	int i;

	if (min > max) /*task req*/
	{
		return (NULL);
	}

	m = malloc(sizeof(*m) * ((max - min) + 1)); /*+1 for null char of arr*/
	/*sizeof(*m) is used instead of typecast, see notes*/
	if (m == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++, min++) /*create arr. min++ to reach max*/
	{
		m[i] = min;
	}
	return (m);
}
