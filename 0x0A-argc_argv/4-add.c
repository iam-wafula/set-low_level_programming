#include "main.h"

/**
 * _isdigit - checks if a string contains only digits
 * @s: string to check
 *
 * Return: 1 if true, 0 if false
 */
int _isdigit(char *s)
{
    int i = 0;

    while (s[i])
    {
        if (s[i] < '0' || s[i] > '9')
            return (0);
        i++;
    }
    return (1);
}

/**
 * _atoi - converts string to integer
 * @s: string
 *
 * Return: integer value
 */
int _atoi(char *s)
{
    int i = 0, num = 0;

    while (s[i])
    {
        num = num * 10 + (s[i] - '0');
        i++;
    }
    return (num);
}

/**
 * print_number - prints an integer using _putchar
 * @n: number to print
 */
void print_number(int n)
{
    int i = 0;
    char buf[20];

    if (n == 0)
    {
        _putchar('0');
        return;
    }

    while (n > 0)
    {
        buf[i++] = (n % 10) + '0';
        n /= 10;
    }

    while (i--)
        _putchar(buf[i]);
}

/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
    int i, sum = 0;

    if (argc == 1)
    {
        _putchar('0');
        _putchar('\n');
        return (0);
    }

    for (i = 1; i < argc; i++)
    {
        if (!_isdigit(argv[i]))
        {
            _putchar('E');
            _putchar('r');
            _putchar('r');
            _putchar('o');
            _putchar('r');
            _putchar('\n');
            return (1);
        }
        sum += _atoi(argv[i]);
    }

    print_number(sum);
    _putchar('\n');

    return (0);
}
