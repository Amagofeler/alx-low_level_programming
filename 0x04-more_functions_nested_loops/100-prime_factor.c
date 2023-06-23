#include "main.h"
#include <stdio.h>

/**
 * largest_prime_factor - Finds the largest prime factor of a number.
 * @n: The number to find the largest prime factor for.
 *
 * Return: The largest prime factor of @n.
 */
long largest_prime_factor(long n)
{
	long factor;

	for (factor = 2; factor <= n; factor++)
	{
		if (n % factor == 0)
		{
			n /= factor;
			factor--;
		}
	}

	return (factor);
}

/**
 * main - Entry point.
 *
 * Return: Always 0.
 */
int main(void)
{
	long number = 612852475143;
	long largest_factor;

	largest_factor = largest_prime_factor(number);

	printf("%ld\n", largest_factor);

	return (0);
}
