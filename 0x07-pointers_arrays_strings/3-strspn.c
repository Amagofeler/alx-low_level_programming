#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: Pointer to the string.
 * @accept: Pointer to the characters to be matched.
 *
 * Return: The number of bytes in the initial segment of s which consist only
 *         of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
    unsigned int count = 0;
    int match;

    while (*s)
    {
        match = 0;
        for (; *accept; accept++)
        {
            if (*s == *accept)
            {
                count++;
                match = 1;
                break;
            }
        }
        if (!match)
            break;
        s++;
        accept = accept - count;
    }

    return count;
}
