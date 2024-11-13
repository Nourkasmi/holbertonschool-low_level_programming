#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 *           which contains a copy of the string given as a parameter.
 * @str: The string to duplicate.
 *
 * Return: Pointer to the duplicated string, or NULL if str is NULL or
 *         if memory allocation fails.
 */
char *_strdup(char *str)
{
char *duplicate;
unsigned int len;
if (str == NULL)
{
return (NULL);
}
len = strlen(str);
duplicate = (char *)malloc((len + 1) * sizeof(char));
if (duplicate == NULL)
{
return (NULL);
}
strcpy(duplicate, str);
return (duplicate);
}
