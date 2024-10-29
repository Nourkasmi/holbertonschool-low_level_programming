#include <stdio.h>
#include "main.h"
/**
 * print_numbers - Prints the digits from 0 to 9, followed by a newline.
 */
void print_numbers(void)
{
char i;

for (i = '0' ; i <= '9'; i++)
{
_putchar(i);
}
_putchar('\n');
}
