#include "lists.h"
/**
 *print_listint - Prints all of the linked list.
 *@h: list-t list pointer of the head.
 *return: nodes number in list-t list.
*/
size_t print_listint(const listint_t *h)
{
size_t num = 0;
while (h)
{printf("%d\n", h->n);
num++;
h = h->next;
}
return (num);
}

