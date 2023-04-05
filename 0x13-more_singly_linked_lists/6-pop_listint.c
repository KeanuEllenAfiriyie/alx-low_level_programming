#include "lists.h"
#include <stdlib.h>



int pop_listint(listint_t **head)
{
	listint_t *first;
	int i;

	if (*head == NULL)
		return (0);

	first = *head;
	i = (*head)->n;
	*head = (*head)->next;

	free(first);

	return (i);
}
