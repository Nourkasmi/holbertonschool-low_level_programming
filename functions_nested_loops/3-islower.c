#include "main.h"

/**
 * _islower - checks for a lowercase character.
 * @c: The character to check.
 *
 * Return: 1 if c is lowercase, 0 if else.
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}