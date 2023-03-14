#include "main.h"
#include <stdlib.h>

/**
 *alloc_grid - createa 2d grid
 *@width: width of grid
 *@height: height of grid
 *Return: pointer to grid
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j, k, l;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	arr = malloc(sizeof(int *) * height);
/*check for failure*/
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}
/*free arr if NULL*/
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			for (j = i; j >= 0; j--)
			{
				free(arr[j]);
			}
			free(arr);
			return (NULL);	
		}
	}
	for (k = 0; k < height; k++) /*creating grid*/
	{
		for (l = 0; l < width; l++)
		{
			arr[k][l] = 0; /*grid elements initialized to 0*/
		}
	}
	return (arr);
}
