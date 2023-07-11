#include <stdlib.h>
#include <string.h>
#include "main.h"

int is_space(char c)
{
return (c == ' ' || c == '\t' || c == '\n');
}

/**
 * count_words - Counts the number of words in a string
 * @str: The string to count words in
 *
 * Return: The number of words
 */
int count_words(char *str)
{
int count = 0;
int i, len = strlen(str);

for (i = 0; i < len; i++)
{
if (!is_space(str[i]) && (is_space(str[i + 1]) || str[i + 1] == '\0'))
count++;
}

return (count);
}

/**
 * strtow - Splits a string into words
 * @str: The string to split
 *
 * Return: Pointer to an array of strings (words) on success,
 *         or NULL if str == NULL or str == "" or if memory allocation fails
 */
char **strtow(char *str)
{
char **words;
int i, j, k = 0;
int len, word_count, word_len;

if (str == NULL || strcmp(str, "") == 0)
return (NULL);

word_count = count_words(str);
if (word_count == 0)
return (NULL);

words = (char **)malloc((word_count + 1) * sizeof(char *));
if (words == NULL)
return (NULL);
for (i = 0; i < word_count; i++)
{
while (is_space(*str))
str++;

len = strlen(str);
word_len = 0;
for (j = 0; j < len; j++)
{
if (is_space(str[j]))
break;
word_len++;
}

words[i] = (char *)malloc((word_len + 1) * sizeof(char));
if (words[i] == NULL)
{
for (k = 0; k < i; k++)
free(words[k]);
free(words);
return (NULL);
}

strncpy(words[i], str, word_len);
words[i][word_len] = '\0';
str += word_len;
}

words[word_count] = NULL;

return (words);
}
