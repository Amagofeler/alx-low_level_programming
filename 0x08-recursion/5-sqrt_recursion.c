#include "main.h"

/**
 * _sqrt_recursion - Computes the natural square root of a number.
 * @n: The number to compute the square root of.
 *
 * Return: The natural square root of n, or -1 if it does not have a natural square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return -1;

	if (n == 0 || n == 1)
		return n;

	return sqrt_recursive(n, 1, n);
}

/**
 * sqrt_recursive - Helper function to recursively compute the square root.
 * @n: The number to compute the square root of.
 * @start: The starting value for the range to search for the square root.
 * @end: The ending value for the range to search for the square root.
 *
 * Return: The natural square root of n within the specified range, or -1 if not found.
 */
int sqrt_recursive(int n, int start, int end)
{
	int mid = (start + end) / 2;

	if (start <= end)
	{
		if (mid * mid == n)
			return mid;

		if (mid * mid < n)
			return sqrt_recursive(n, mid + 1, end);

		return sqrt_recursive(n, start, mid - 1);
	}

	return end;
}
