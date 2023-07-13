#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - Creates an array of integers.
 * @min: Minimum value.
 * @max: Maximum value.
 *
 * Return: Pointer to the newly created array, or NULL on failure
 *         or if min > max.
 */
int *array_range(int min, int max)
{
int *arr;
int i;

if (min > max)
return (NULL);

arr = malloc(sizeof(int) * (max - min + 1));
if (arr == NULL)
return (NULL);

for (i = 0; i <= max - min; i++)
arr[i] = min + i;

return (arr);
}
