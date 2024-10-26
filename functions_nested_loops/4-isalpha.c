#include "main.h"

/**
 * _isalpha - checks for alphabetic character.
 * @c: The character to check (as an integer).
 *
 * Return: 1 if c is a letter, lowercase or uppercase, 0 anything else.
 */
int _isalpha(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else if (c >= 'A' && c <= 'Z')
{
return (1);
}
return (0);
}
