#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function that returns a pointer to
 * a 2 dimensional array of integers
 * @width: width of the grid
 * @height: height of the grid
 * Return: Null on failure
 */
void free_grid(int **grid, int height)
{
	int a = 0;

	while (a < height)
	{
		free(grid[a]);
	}
	free(grid);
}
