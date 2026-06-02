#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - prints the day of the year and remaining days
 *                        considering leap years and invalid dates
 * @month: month number (1-12)
 * @day: day of year (converted from month/day)
 * @year: full year
 *
 * Return: void
 */
void print_remaining_days(int month, int day, int year)
{
	int is_leap;

	is_leap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);

	/* Handle invalid Feb 29 on non-leap years */
	if (!is_leap && month == 2 && day == 60)
	{
		printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
		return;
	}

	/* Adjust day-of-year for leap years after Feb */
	if (is_leap && month > 2)
		day++;

	printf("Day of the year: %d\n", day);
	if (is_leap)
		printf("Remaining days: %d\n", 366 - day);
	else
		printf("Remaining days: %d\n", 365 - day);
}
