#include "main.h"

/**
 * print_chessboard - prints a chessboard
 * @a: 8x8 array representing the chessboard
 *
 * Description: This function prints an 8x8 chessboard.
 * Each character is printed using _putchar.
 */
void print_chessboard(char (*a)[8])
{
    int i, j;

    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 8; j++)
        {
            _putchar(a[i][j]);
        }
        _putchar('\n');
 
   }
}
