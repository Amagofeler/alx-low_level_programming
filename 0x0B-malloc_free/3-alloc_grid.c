#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - Allocates a 2 dimensional array of integers
 * @width: The width of the grid
 * @height: The height of the grid
 *
 * Return: Pointer to the allocated 2 dimensional array (grid) on success,
 *         NULL if width or height is 0 or negative,
 *         or if memory allocation fails
 */
int **alloc_grid(int width, int height)
{
int **grid;
int i, j;

if (width <= 0 || height <= 0)
return (NULL);

    /* Allocate memory for the rows */
grid = (int **)malloc(height * sizeof(int *));
if (grid == NULL)
return (NULL);

    /* Allocate memory for each row */
for (i = 0; i < height; i++)
{
grid[i] = (int *)malloc(width * sizeof(int));
if (grid[i] == NULL)
{
    /* Free previously allocated memory if allocation fails */
for (j = 0; j < i; j++)
free(grid[j]);
free(grid);
return (NULL);
}
}

    /* Initialize each element to 0 */
for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
{
grid[i][j] = 0;
}
}

return grid;
}
