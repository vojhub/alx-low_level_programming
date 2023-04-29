#include "lists.h"
/**
 *add_nodeint_end - Adds a new node at the end of listint_t list
 *@head: Ponter to thehead of listint-t list
 *@n: New node integer
 *Return: If the function fails - NULL. Else - the address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new;
listint_t *temp = *head;
new = malloc(sizeof(listint_t));
if (!new)
return (NULL);
new->n = n;
new->next = NULL;
if (*head == NULL)
{
*head = new;
return (new);
}
while (temp->next)
temp = temp->next;
temp->next = new;
return (new);
}

