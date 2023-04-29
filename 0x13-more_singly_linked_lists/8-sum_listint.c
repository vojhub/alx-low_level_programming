#include "lists.h"

/**
 *sum_listint -  sum of all the data in a listint_t list
 *@head: first node in the linked list
 * Return: resulting sum
 */

int sum_listint(listint_t *head)
{
int add = 0;

while (head)
{
	add += head->n;
	head = head->next;
}
return (add);
}
