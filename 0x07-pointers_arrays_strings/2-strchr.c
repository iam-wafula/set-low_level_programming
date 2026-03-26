#include "main.h"

/**
 * _strchr - locates the first occurrence of a character in a string
 * @s: pointer to the string to search
 * @c: character to locate
 *
 * Description: This function searches the string s for the first
 * occurrence of the character c (including the null terminator).
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

    /* check if character is the null terminator */
    if (c == '\0')
        return (&s[i]);

    return (0);
}
