#include "lists.h"

/**
 *get_nodeint_at_index - returns the node at a certain index
 *@head: first node in the linked list
 *@index: index of the node to return
 *Return: If the node does not exist - NULL.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int alx;

for (alx = 0; alx < index; alx++)
{
if (head == NULL)
return (NULL);

head = head->next;
}

return (head);
}
