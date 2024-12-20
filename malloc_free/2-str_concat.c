#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: pointer to the newly allocated concatenated string,
 * or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
char *concat;
unsigned int len1 = 0, len2 = 0, i;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
while (s1[len1] != '\0')
{
len1++;
}
while (s2[len2] != '\0')
{
len2++;
}
concat = (char *)malloc((len1 + len2 + 1) * sizeof(char));
if (concat == NULL)
{
return (NULL);
}
for (i = 0; i < len1; i++)
{
concat[i] = s1[i];
}
for (i = 0; i < len2; i++)
{
concat[len1 + i] = s2[i];
}
concat[len1 + len2] = '\0';
return (concat);
}
