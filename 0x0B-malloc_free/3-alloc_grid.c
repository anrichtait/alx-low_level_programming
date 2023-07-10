#include <stdlib.h>
#include "main.h"

/**
* **alloc_grid - creates a 2D array of integers
* @width: width of array
* @height: of array
* Return: NULL if fail and ptr if success
*/

int **alloc_grid(int width, int height)
{
	int i;
	int **grid = malloc(sizeof(int *) * height);
	int k;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	if (grid == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);

		for (k = 0; k < width; k++)
		{
			grid[i][k] = 0;
		}
	}
	return (grid);
}
