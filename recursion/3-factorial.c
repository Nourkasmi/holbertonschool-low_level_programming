#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string using recursion
 * @s: The string whose length is to be found
 *
 * Return: The length of the string
 */
int factorial(int n)
{
if (n < 0)
{
return(-1);
}
if (n == 0)
{
return (1);
}
{
return (n * factorial(n - 1));
}
}