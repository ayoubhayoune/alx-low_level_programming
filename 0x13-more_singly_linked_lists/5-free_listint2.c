#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list.
 * @head: Pointer to the pointer of the head of the list.
 *
 * The function sets the head to NULL.
 */
void free_listint2(listint_t **head)
{
	listint_t *current = *head;
	listint_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}

	*head = NULL;
}
