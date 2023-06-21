#include "main.h"
#include <limits.h>

/**
 * print_last_digit - Prints the last digit of a number
 * @n: The input number
 *
 * Return: The value of the last digit
 */
int print_last_digit(int n)
{
	int last_digit;

	if (n == INT_MIN)
		return (-8);

	if (n < 0)
		n = -n;

	last_digit = n % 10;
	_putchar('0' + last_digit);

	return (last_digit);
}
