#include "main.h"

/**
 * leet - Encodes a string into 1337 (leet speak).
 * @str: The string to be modified.
 *
 * Return: A pointer to the modified string.
 */
char *leet(char *str)
{
int i, j;
char first[] = "aeotlAEOTL";
char leet[] = "4307143071";
for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; first[j] != '\0'; j++)
{
if (str[i] == first[j])
str[i] = leet[j];
}
}
return (str);
}
