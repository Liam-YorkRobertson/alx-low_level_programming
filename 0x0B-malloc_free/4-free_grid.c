#include "main.h"
#include <stdlib.h>

/**
 *free_grid - frees grid from previous task
 *@grid: grid from last task
 *@height: height of grid
 *Return: none (void)
 */

void free_grid(int **grid, int height)
{
	int i;
	/*have to free each element first and then the grid after (i think)*/
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
