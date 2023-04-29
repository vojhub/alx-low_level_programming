#include "lists.h"
/**
 *free_listint - it frees a listint_t list
 *@head: A pointer to the head in listint_t to be freed
 */
void free_listint(listint_t *head)
{
listint_t *temp;
while (head)
{
	temp = head->next;
	free(head);
	head = temp;
}
}

