#include "main.h"

/**
 * test_islower - Tests the _islower function.
 * @n: The character to test.
 *
 * Return: Always 0.
 */
int test_islower(int n)
{
    int r;

    r = _islower(n);
    _putchar(r + '0');
    _putchar('\n');
    return (0);
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    test_islower('H');
    test_islower('o');
    test_islower(108);
    return (0);
}
