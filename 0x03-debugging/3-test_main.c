#include <stdio.h>
#include "main.h"

/**
 * main - test print_remaining_days function
 * Return: 0
 */
int main(void)
{
	int month, day, year;

	/* Test 1: Leap year */
	month = 2;
	day = 29;
	year = 2000;

	printf("Date: %02d/%02d/%04d\n", month, day, year);
	day = convert_day(month, day);
	print_remaining_days(month, day, year);

	/* Test 2: Non-leap year invalid date */
	month = 2;
	day = 29;
	year = 2001;

	printf("\nDate: %02d/%02d/%04d\n", month, day, year);
	day = convert_day(month, day);
	print_remaining_days(month, day, year);

	return (0);
}o

