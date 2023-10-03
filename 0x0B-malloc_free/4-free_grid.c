#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - fuction of the program that frees two dimensional grid
 * @grid: 2d grid to be free
 * @height: height dimension of the grid
 * Description: the act of freeing memory of a grid
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
