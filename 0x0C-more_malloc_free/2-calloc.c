#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _calloc - Allocates memory for an array, setting it to zero.
 * @nmemb: Number of elements in the array.
 * @size: Size of each element in bytes.
 *
 * Return: Pointer to the allocated memory, or NULL if allocation fails
 *         or nmemb or size is 0.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *p;
unsigned int total_size;

    /* Check for zero nmemb or size */
if (nmemb == 0 || size == 0)
return (NULL);

    /* Calculate the total size */
total_size = nmemb * size;

    /* Allocate memory using malloc */
p = malloc(total_size);

    /* Check if malloc failed */
if (p == NULL)
return (NULL);

    /* Set the allocated memory to zero */
memset(p, 0, total_size);

return (p);
}
