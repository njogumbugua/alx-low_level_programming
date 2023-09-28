#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a linked list
 * @head: pointer to the listint_t list to be freed
 */

int pop_listint(listint_t **head)
{
listint_t *temp;

	if (head == NULL)
		return (1);

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
  return (0);
}
