#include "main.h"
#include <unistd.h>

int _putchar(char c);

/**
 * print_alphabet_x10 - Prints the alphabet in lowercase 10 times
 */
void print_alphabet_x10(void)
{
    int i;

    for (i = 0; i < 10; i++)
    {
        char letter = 'a';

        while (letter <= 'z')
        {
            _putchar(letter);
            letter++;
        }

        _putchar('\n');
    }
}

int _putchar(char c)
{
    return write(1, &c, 1);
}
