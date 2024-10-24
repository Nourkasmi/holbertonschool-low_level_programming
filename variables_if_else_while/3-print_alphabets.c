#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char n;
char N;
for (n = 'a'; n <= 'z'; n++)
{
putchar(n);
}
for (N = 'A'; N <= 'Z'; N++)
{
putchar(N);
}
putchar('\n');
return (0);
}
