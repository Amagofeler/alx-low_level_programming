#include <stdio.h>
#include "main.h"

void print_remaining_days(int month, int day, int year)
{
    int days_in_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int day_of_year = 0;
    int i;

    for (i = 1; i < month; i++)
    {
        day_of_year += days_in_month[i];
    }

    day_of_year += day;

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        if (month > 2)
        {
            day_of_year += 1;
        }
    }

    printf("Day of the year: %d\n", day_of_year);
    printf("Remaining days: %d\n", 365 - day_of_year);
}
