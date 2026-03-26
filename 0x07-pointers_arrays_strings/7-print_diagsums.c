#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: pointer to the first element of the matrix
 * @size: size of the square matrix
 *
 * Description: The function prints two sums separated by a comma and a space.
 */
void print_diagsums(int *a, int size)
{
    int i, sum1 = 0, sum2 = 0;

    for (i = 0; i < size; i++)
    {
        sum1 += *(a + i * size + i);         /* main diagonal */
        sum2 += *(a + i * size + (size - 1 - i)); /* secondary diagonal */
    }

    printf("%d, %d\n", sum1, sum2);
}
