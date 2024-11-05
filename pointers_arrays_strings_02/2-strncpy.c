#include "main.h"

/**
 * _strncpy - Copies a string up to n bytes.
 * @dest: The destination buffer where the string will be copied.
 * @src: The source string to be copied.
 * @n: The maximum number of bytes to copy from `src`.
 *
 * Return: A pointer to the resulting string `dest`.
 */
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
while (i < n && src[i] != '\0')
{
dest[i] = src[i];
i++;
}
while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}
