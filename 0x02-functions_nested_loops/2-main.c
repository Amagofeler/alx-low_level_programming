#include "main.h"
#include <unistd.h> // Include the <unistd.h> header for the write function

int _putchar(char c)
{
    return write(1, &c, 1);
}

int main(void)
{
    print_alphabet_x10();
    return 0;
}

