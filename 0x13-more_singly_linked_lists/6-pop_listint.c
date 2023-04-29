#include "lists.h"
/**
 *pop_listint - Deletes the head node of a listint_t list.
 *@head: A pointer to listint_t list
 *Return: If the linked list is empty - 0.
*/
int pop_listint(listint_t **head)
{
listint_t *temp;
int nam;

if (!head || !*head)
return (0);

nam = (*head)->n;
temp = (*head)->next;
free(*head);
*head = temp;

return (nam);
}
