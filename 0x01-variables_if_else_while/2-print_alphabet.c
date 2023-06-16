#include <stdio.h>

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
