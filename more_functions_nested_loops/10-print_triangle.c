#include "main.h"
/**
 * print_triangle - Prints a triangle of # characters with a given size.
 * @size: The size of the triangle (number of # characters per side).
 */

void print_triangle(int size)
{
int i, j, k;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (i = 1; i <= size; i++)
{
for (j = size - i; j > 0; j--)
{
_putchar(' ');
}
for (k = 0; k < i; k++)
{
_putchar('#');
}
_putchar('\n');
}
}
}