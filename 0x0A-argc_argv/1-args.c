#include "main.h"

/**
 * main - prints the number of arguments
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
    int i = argc - 1;
    
    _putchar(i + '0');
    _putchar('\n');
    return (0);
}
