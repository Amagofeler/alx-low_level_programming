#include "main.h"
#include <unistd.h>

int custom_putchar(char c);

/**
 * print_alphabet_x10 - Prints the alphabet in lowercase 10 times
 */
void print_alphabet_x10(void)
{
    int i;
    char letter;

    for (i = 0; i < 10; i++)
    {
        letter = 'a';
        while (letter <= 'z')
        {
            custom_putchar(letter);
            letter++;
        }
        custom_putchar('\n');
    }
}

int custom_putchar(char c)
{
    return write(1, &c, 1);
}
