#include <stdlib.h>
#include "main.h"

/**
* free_grid - frees the previsouly created 2d array
* @grid: array to free
* @height: of array
* Return: if nothing to do
*/

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
	{
		return;
	}

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
