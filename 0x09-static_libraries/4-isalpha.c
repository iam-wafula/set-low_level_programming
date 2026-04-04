#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: character to check
 * Return: 1 if letter, 0 otherwise
 */
int _isalpha(int c)
{
    return ((_islower(c) || (c >= 'A' && c <= 'Z')));
}
