#include "main.h"

/**
 * flip_bits - Returns the number of bits you would need to flip to get
 * from one number to another.
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits that need to be flipped.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int value = n ^ m;
unsigned int bit_count = 0;
while (value)
{
bit_count += value & 1;  
value >>= 1;
}
return (bit_count);
}
