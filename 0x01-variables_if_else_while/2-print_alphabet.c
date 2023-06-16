#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase, followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char start = 'a';
	char end = 'z';

	while (start <= end)
	{
		putchar(start++);
	}
	putchar('\n');

	return (0);
}
