#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 */

int largest_number(int a, int b, int c)
{
    int largest = a;

    if (b > largest)
        largest = b;

    if (c > largest)
        largest = c;

    return (largest);
}
