#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to memory area dest.
 * @: Number of bytes to copy.
 * @src: Pointer to the source memory area.
 * @dest: Pointer to the destination memory area.
 *
 * Return: A pointer to the destination area.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;

    for (i = 0; i < n; i++)
        dest[i] = src[i];

    return dest;
}
