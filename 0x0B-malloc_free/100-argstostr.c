#include <stdlib.h>
#include <string.h>

/**
 * argstostr - Concatenates all the arguments of the program
 * @ac: The argument count
 * @av: The argument vector
 *
 * Return: Pointer to the concatenated string on success,
 *         or NULL if ac == 0 or av == NULL or if memory allocation fails
 */
char *argstostr(int ac, char **av)
{
char *str;
int total_len = 0;
int i, j, k = 0;

if (ac == 0 || av == NULL)
return (NULL);

    /* Calculate the total length of the arguments plus newlines */
for (i = 0; i < ac; i++)
{
total_len += strlen(av[i]) + 1; /* Add 1 for the newline character */
}

    /* Allocate memory for the concatenated string */
str = (char *)malloc((total_len + 1) * sizeof(char));
if (str == NULL)
return (NULL);

    /* Copy the arguments into the concatenated string */
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++, k++)
{
str[k] = av[i][j];
}
str[k] = '\n';
k++;
}
str[k] = '\0'; /* Null-terminate the string */

return (str);
}
