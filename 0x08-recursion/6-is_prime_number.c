#include "main.h"

int is_prime_number(int n)
{
	if (n <= 1)
		return 0;

	return is_prime_recursive(n, n - 1);
}

int is_prime_recursive(int n, int divisor)
{
	if (divisor == 1)
		return 1;

	if (n % divisor == 0)
		return 0;

	return is_prime_recursive(n, divisor - 1);
}
