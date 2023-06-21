#include <stdio.h>

/**
 * _abs - Computes the absolute value of an integer.
 * @n: The integer.
 *
 * Return: The absolute value of n.
 */
int _abs(int n);

/**
 * main - Checks the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = _abs(-1);
    printf("%d\n", r);
    r = _abs(0);
    printf("%d\n", r);
    r = _abs(1);
    printf("%d\n", r);
    r = _abs(-98);
    printf("%d\n", r);
    return (0);
}
