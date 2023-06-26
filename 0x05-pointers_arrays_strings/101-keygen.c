#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 12

int main(void)
{
    char password[PASSWORD_LENGTH + 1];  // +1 for the null terminator
    int i;

    srand(time(NULL));  // Seed the random number generator with the current time

    for (i = 0; i < PASSWORD_LENGTH; i++)
    {
        int randomCharType = rand() % 3;  // Generate a random number from 0 to 2

        if (randomCharType == 0)
        {
            // Generate a random lowercase letter ASCII value (97-122)
            password[i] = rand() % 26 + 'a';
        }
        else if (randomCharType == 1)
        {
            // Generate a random uppercase letter ASCII value (65-90)
            password[i] = rand() % 26 + 'A';
        }
        else
        {
            // Generate a random digit ASCII value (48-57)
            password[i] = rand() % 10 + '0';
        }
    }

    password[PASSWORD_LENGTH] = '\0';  // Add null terminator to the end of the password

    printf("%s\n", password);

    return 0;
}
