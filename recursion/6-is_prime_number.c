#include "main.h"

/**
 * check_prime - Helper function to check if n is divisible by any number
 * @n: The number to check for prime status
 * @divisor: The current divisor being tested
 *
 * Return: 1 if n is a prime number, 0 otherwise
 */
int check_prime(int n, int divisor)
{
if (divisor * divisor > n)
return (1);
if (n % divisor == 0)
return (0);
return (check_prime(n, divisor + 1));
}

/**
 * is_prime_number - Checks if a number is a prime number
 * @n: The number to check
 *
 * Return: 1 if n is a prime number, 0 otherwise
 */
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (check_prime(n, 2));
}
