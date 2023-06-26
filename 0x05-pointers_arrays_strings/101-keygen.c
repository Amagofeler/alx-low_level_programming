#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 12

int main(void)
{
    char password[PASSWORD_LENGTH + 1]; /* +1 for the null terminator */
    int i;

    srand(time(NULL));

    for (i = 0; i < PASSWORD_LENGTH; i++)
    {
        password[i] = rand() % 94 + 33; /* Generate random printable ASCII characters */
    }

    password[PASSWORD_LENGTH] = '\0'; /* Add the null terminator */

    printf("%s", password);

    return 0;
}
