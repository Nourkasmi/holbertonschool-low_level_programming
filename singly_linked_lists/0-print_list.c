#include "main.h"

/**
* print_list - prints all elements of a list_t list
*@h: head of the list
* Return: number of nodes
*/
size_t print_list(const list_t *h)
{
size_t nodes = 0;
while (h != NULL)
{
if (h->str == NULL)
printf("[0] (nil)");
else
printf("[%u] %s\n", h->len, h->str);
nodes++;
h = h->second;
}
return (nodes);
}