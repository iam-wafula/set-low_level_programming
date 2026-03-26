#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: pointer to the string to search
 * @c: character to locate
 *
 * Description: This function returns a pointer to the first
 * occurrence of the character c in the string s. If c is not
 * found, it returns NULL.
 * Return: pointer to the located character, or NULL if not found
 */
char *_strchr(char *s, char c)
{
    int i;

    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == c)
            return (&s[i]);
    }

    if (c == '\0')
        return (&s[i]);

    return (0);
}
