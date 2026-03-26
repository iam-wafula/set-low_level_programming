#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to the memory area
 * @b: byte to fill
 * @n: number of bytes to fill
 *
 * Description: This function fills the first n bytes of memory
 * pointed to by s with the constant byte b.
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
    unsigned int i;

    for (i = 0; i < n; i++)
        s[i] = b;

    return (s);
}
