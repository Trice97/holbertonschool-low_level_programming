#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* free_grid - Frees a 2 dimensional grid.
* @grid: The address of the 2 dimensional grid.
* @height: Height of the grid.
*
* Description: This function frees the memory allocated for a 2D grid
* previously created by the alloc_grid function.
* It iterates through each row of the grid and frees the
* memory allocated for that row, then frees the memory
* allocated for the array of pointers (the grid itself).
* Return: Nothing.
*/
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return;

	for (i = 0; i <= height; i++)
	{
		free(grid[i]);
	}
	free(grid);

}

