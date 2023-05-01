#include "lists.h"
/**
 * find_listint_loop - Finds the loop contained in
 *                     a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: If there is no loop - NULL.
 *         Otherwise - the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *pole = head;
listint_t *mbio = head;

if (!head)
return (NULL);

while (pole && mbio && mbio->next)
{
mbio = mbio->next->next;
pole = pole->next;
if (mbio == pole)
{
pole = head;
while (pole != mbio)
{
pole = pole->next;
mbio = mbio->next;
}
return (mbio);
}
}
 return (NULL);
}

