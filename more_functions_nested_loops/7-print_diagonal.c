#include "main.h"
/**
 * print_diagonal - Draws a diagonal line on the terminal.
 * @n: The number of times the '\' character is printed to form the line.
 *
 * Description: This function prints a diagonal line on the terminal.
 * For each line, it offsets the '\' character by an increasing number
 * of spaces to create the diagonal effect. The number of lines in the
 * diagonal is determined by `n`. If `n` is 0 or less, the function
 * simply prints a newline. Each line of the diagonal ends with a newline.
 *
 * Return: void
 */

void print_diagonal(int n)
{
int i, j;

if (n <= 0)
{
_putchar('\n');
}
else
{
for (i = 0; i < n; i++)
{
for (j = 0; j < i; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
}
