#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _isdigit - checks if a character is a digit
 * @c: the character to check
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
    return (c >= '0' && c <= '9');
}

/**
 * _strlen - computes the length of a string
 * @s: the string to compute the length of
 *
 * Return: the length of s
 */
int _strlen(char *s)
{
    int i;

    for (i = 0; s[i]; i++)
        ;
    return (i);
}

/**
 * mul - multiplies two positive numbers
 * @num1: the first number to multiply
 * @num2: the second number to multiply
 *
 * Return: a pointer to the result of the multiplication
 */
char *mul(char *num1, char *num2)
{
    int len1, len2, i, j, n1, n2, carry;
    char *result;

    len1 = _strlen(num1);
    len2 = _strlen(num2);
    result = calloc(len1 + len2 + 1, sizeof(char));
    if (result == NULL)
        return (NULL);

    for (i = len1 - 1; i >= 0; i--)
    {
        carry = 0;
        n1 = num1[i] - '0';
        for (j = len2 - 1; j >= 0; j--)
        {
            n2 = num2[j] - '0';
            carry += result[i + j + 1] + (n1 * n2);
            result[i + j + 1] = carry % 10;
            carry /= 10;
        }
        if (carry > 0)
            result[i + j + 1] += carry;
    }

    for (i = 0; result[i] == 0 && i < len1 + len2 - 1; i++)
        ;
    for (j = 0; i < len1 + len2; i++, j++)
        result[j] = result[i] + '0';
    result[j] = '\0';

    return (result);
}

/**
 * main - multiplies two positive numbers
 * @argc: the number of command-line arguments
 * @argv: an array of command-line argument strings
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
    char *result;

    if (argc != 3)
    {
        printf("Error\n");
        return (98);
    }
    for (int i = 1; i < argc; i++)
    {
        for (int j = 0; argv[i][j]; j++)
        {
            if (!_isdigit(argv[i][j]))
            {
                printf("Error\n");
                return (98);
            }
        }
    }

    result = mul(argv[1], argv[2]);
    if (result == NULL)
        return (98);

    printf("%s\n", result);
    free(result);

    return (0);
}
