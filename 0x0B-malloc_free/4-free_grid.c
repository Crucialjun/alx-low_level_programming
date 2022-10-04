#include <stdlib.h>
/**
 * free_grid - check code
 * @grid:  int
 * @height: int
 *
 * Return: a double pointer to the 2D array
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return;
	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
