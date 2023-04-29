#include "lists.h"
/**
 *listint_len - returns the number of elements in a linked lists
 *@h: pointer to the head of list
 *Return: The number of elements in the listint_t list
*/
size_t listint_len(const listint_t *h)
{
size_t nam = 0;
while (h)
{
nam++;
h = h->next;
}
return (nam);
}

