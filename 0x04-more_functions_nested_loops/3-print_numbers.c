#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		/* Using _putchar instead of putchar */
		_putchar(i + '0');
	}

	_putchar('\n');
}
