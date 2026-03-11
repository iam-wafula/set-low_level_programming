#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - prints the day of the year and remaining days
 *                        taking leap years into account
 * @month: month number (1-12)
 * @day: day of the year (converted from month/day)
 * @year: full year
 *
 * Return: void
 */
void print_remaining_days(int month, int day, int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	{
		/* Leap year adjustment: add 1 if date after Feb */
		if (month > 2)
			day++;

		printf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n", 366 - day);
	}
	else
	{
		printf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n", 365 - day);
	}
}
