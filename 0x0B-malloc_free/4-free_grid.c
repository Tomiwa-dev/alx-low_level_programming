#include "main.h"
#include <atdlib.h>
/**
 * free_grid - a function that free a 2-d grid
 * @grid: grid
 * @height: height
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL)
		return;
	while (i < height)
		free((int *)grid[i++]);
	free(grid);
}
