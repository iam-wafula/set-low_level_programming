#include "main.h"
#include <stdlib.h>

char *_strdup(char *str)
{
    char *dup;
    int i = 0;
    int len = 0;

    if (str == NULL)
        return (NULL);

    while (str[len])
        len++;

    dup = malloc(sizeof(char) * (len + 1));
    if (dup == NULL)
        return (NULL);

    while (i < len)
    {
        dup[i] = str[i];
        i++;
    }

    dup[i] = '\0';

    return (dup);
}
