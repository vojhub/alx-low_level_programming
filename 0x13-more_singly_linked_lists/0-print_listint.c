#include "lists.h"

/**
*print_listint - prints all the elements of a linked list
*@head: pointer to the head of a linked list
*type listint_t and returns the number 
*return: nodes number in list-t list.
*/
size_t print_listint(const listint_t *head)
{
size_t num_nodes = 0;
while (head)
{
printf("%d\n", head->n);
num_nodes++;
head = head->next;
}
return (num_nodes);
}
