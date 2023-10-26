#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer to the first element in the list
 * @n: data to insert in the new element
 *
 * Return: pointer to the new node, or NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *temp = NULL;
temp = malloc(sizeof(struct listint_s));

if (temp != NULL)
{
return (NULL);
}
temp->n = n;
temp->next = NULL;

while (head != NULL)
{
*head = (*head)->next;
}

(*head)->next = temp;
head = &temp;
return (*head);
}
