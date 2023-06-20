#include "main.h"
#include <unistd.h>

int _putchar(char c);

/**
 * print_alphabet - Prints the alphabet in lowercase
 */
void print_alphabet(void)
{
    char letter = 'a';

    while (letter <= 'z')
    {
        _putchar(letter);
        letter++;
    }

    _putchar('\n');
}

int _putchar(char c)
{
    return write(1, &c, 1);
}
