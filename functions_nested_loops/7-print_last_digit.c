#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number to extract the last digit from
 *
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
int d;
ld = n % 10;
if (d < 0)
d = -d;
_putchar('0' + d);
return (d);
}
