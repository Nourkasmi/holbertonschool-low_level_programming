#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc
 * @b: The number of bytes to be allocated.
 *
 * Return: A pointer to the allocated memory.
 * On failure, exits the program with a status value of 98.
 */
void *malloc_checked(unsigned int b)
{
void *ptr;
ptr = malloc(b);
if (ptr == NULL)
exit(98);
return (ptr);
}
