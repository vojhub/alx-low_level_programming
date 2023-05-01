#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list
 *@head: pointer to the first node
 *@idx: index where the new node is added
 *@n: The integer for the new node to contain
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_namint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new, *copy = *head;
unsigned int nam;

new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);
new->n = n;

if (idx == 0)
{
new->next = copy;
*head = new;
return (new);
}

for (nam = 0; nam < (idx - 1); nam++)
{
if (copy == NULL || copy->next == NULL)
return (NULL);

copy = copy->next;
}

new->next = copy->next;
copy->next = new;

return (new);
}
