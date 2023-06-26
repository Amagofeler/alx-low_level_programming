#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    if (argc == 2)
    {
        char command[50];
        sprintf(command, "./101-crackme \"%s\"", argv[1]);
        system(command);
    }
    else
    {
        printf("Usage: %s <password>\n", argv[0]);
    }

    return 0;
}
