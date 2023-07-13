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
    int size, i;

    /* Check if min is greater than max */
    if (min > max)
        return (NULL);

    /* Calculate the size of the array */
    size = max - min + 1;

    /* Allocate memory for the array */
    arr = malloc(size * sizeof(int));
    if (arr == NULL)
        return (NULL);

    /* Fill the array with values from min to max */
    for (i = 0; i < size; i++)
        arr[i] = min++;

    return (arr);
}
