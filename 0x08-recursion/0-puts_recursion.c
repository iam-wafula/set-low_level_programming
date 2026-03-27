#include "main.h"

/**
 * _puts_recursion - prints a string followed by a new line
 * @s: pointer to the string
 */
void _puts_recursion(char *s)
{
    if (*s == '\0')  /* Base case: end of string */
    {
        _putchar('\n');  /* Print newline */
        return;
    }

    _putchar(*s);          /* Print current character */
    _puts_recursion(s + 1); /* Recursive call for the next character */
}
