#include <stdio.h>
#include "main.h"

void print_remaining_days(int month, int day, int year)
{
    int leap = 0;

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        leap = 1;

    if (leap && month > 2)
        day++;

    printf("Day of the year: %d\n", day);

    if (leap)
        printf("Remaining days: %d\n", 366 - day);
    else
        printf("Remaining days: %d\n", 365 - day);
}
