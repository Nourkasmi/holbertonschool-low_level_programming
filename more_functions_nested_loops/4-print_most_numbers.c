#include "main.h"

/**
 * print_most_numbers - Prints the digits from 0 to 9, except 2 and 4.
 */
void print_most_numbers(void)
{
char i;

for (i = '0'; i <= '9'; i++)
{
if (i != '4' && i != '2')
{
_putchar(i);
}
}
_putchar('\n');
}
