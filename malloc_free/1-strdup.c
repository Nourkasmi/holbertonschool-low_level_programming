#include <stdio.h>
#include <stdlib.h>  // For malloc, free
#include "main.h"  // For strlen

/**
 * _strdup - Duplicates a string by allocating memory for it.
 * @str: The input string to be duplicated.
 *
 * Return: Pointer to the duplicated string or NULL if memory allocation fails.
 */
char *_strdup(char *str)
{
char *dup_str;
unsigned int len, i;
if (str == NULL)
{
return NULL;
}
len = strlen(str);
dup_str = (char *)malloc((len + 1) * sizeof(char));

 
    if (dup_str == NULL)
    {
        return NULL;
    }

    // Copy the string into the newly allocated memory
    for (i = 0; i < len; i++)
    {
        dup_str[i] = str[i];
    }

    // Null-terminate the duplicated string
    dup_str[len] = '\0';

    return dup_str;
}
