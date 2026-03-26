#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to search
 * @accept: string containing characters to match
 *
 * Description: This function locates the first occurrence in
 * the string s of any of the bytes in accept. Returns a pointer
 * to the matching byte, or NULL if no such byte is found.
 * Return: pointer to the first matching byte, or NULL
 */
char *_strpbrk(char *s, char *accept)
{
    unsigned int i, j;

    for (i = 0; s[i] != '\0'; i++)
    {
        for (j = 0; accept[j] != '\0'; j++)
        {
            if (s[i] == accept[j])
                return (&s[i]);
        }
    }

    return (0);
}
