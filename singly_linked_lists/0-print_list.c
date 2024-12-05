#include "main.h"

/**
* print_list - prints all elements of a list
*@h: head of the list
* Return: number of nodes
*/
size_t print_list(const list_t *h)
{
    size_t nodes = 0;
    while (head != NULL)
{
    if (h->str == NULL)
printf("[0] (nil)");
    else
printf("[%u] %s\n", h->len, h->str);
    nodes++;
    head = h->second;
}
    return (nodes);
}
