#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatenates two strings.
 * @s1: First string.
 * @s2: Second string.
 * @n: Maximum number of bytes of s2 to concatenate.
 *
 * Return: Pointer to the newly allocated space in memory,
 *         or NULL if allocation fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int len1, len2;
char *concat;
unsigned int i, j;

    /* Treat NULL strings as empty strings */
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

    /* Calculate lengths of s1 and s2 */
len1 = strlen(s1);
len2 = strlen(s2);

    /* Adjust n if it's greater than or equal to length of s2 */
if (n >= len2)
n = len2;

    /* Allocate memory for the concatenated string */
concat = malloc((len1 + n + 1) * sizeof(char));
if (concat == NULL)
return (NULL);

    /* Copy characters from s1 to the new string */
for (i = 0; i < len1; i++)
concat[i] = s1[i];

    /* Copy first n bytes of s2 to the new string */
for (j = 0; j < n; j++)
concat[i++] = s2[j];

    /* Add null terminator at the end */
concat[i] = '\0';

return (concat);
}
