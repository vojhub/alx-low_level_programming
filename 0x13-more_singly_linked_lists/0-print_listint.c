#include "lists.h"
/**
 *print_listint - Prints all of the linked list.
 *@h: list-t list pointer of the head.
 *return: nodes number in list-t list.
*/
size_t listint_len(const listint_t *h);
{
size_t nodes = 0;

while (h)
{
	nodes++;
	printf("%d\n", h->n);
	h = h->next;
}
return (nodes);
}
