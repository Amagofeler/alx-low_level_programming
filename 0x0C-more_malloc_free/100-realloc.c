#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _realloc - a function that reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated with a call to malloc
 * @old_size: size, in bytes, of the allocated space for ptr
 * @new_size: new size, in bytes, of the new memory block
 *
 * Return: pointer to the new memory block, or NULL if new_size = 0 and ptr is not NULL,
 * or if malloc fails.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *new_ptr;

if (new_size == 0)
{
free(ptr);
return (NULL);
}

if (ptr == NULL)
return (malloc(new_size));

if (new_size <= old_size)
return (ptr);

new_ptr = malloc(new_size);
if (new_ptr == NULL)
return (NULL);

memcpy(new_ptr, ptr, old_size);
free(ptr);

return (new_ptr);
}
