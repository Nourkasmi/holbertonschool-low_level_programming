#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be printed in binary.
 */
void print_binary(unsigned long int n)
{
int size = sizeof(n) * 8, count = 0;
while (size)
{
if (n & 1L << --size)
{
putchar('1');
count++;
}
else if (count)
{
putchar('0');
}
}
if (!count)
{
putchar('0');
}
}
