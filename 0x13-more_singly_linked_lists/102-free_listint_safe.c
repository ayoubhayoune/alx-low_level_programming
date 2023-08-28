#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _free - Frees the memory of a list and sets head to NULL.
 * @list: Pointer to the list.
 * @num: Size of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t _free(listint_t **list, size_t num)
{
	size_t i;

	for (i = 0; i < num; i++)
		free(list[i]);

	free(list);
	return (i);
}

/**
 * free_listint_safe - Frees a listint_t linked list.
 * @head: Pointer to the start of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t free_listint_safe(listint_t **head)
{
	size_t i, num = 0;
	listint_t **list = NULL;
	listint_t *next;

	while (*head != NULL)
	{
		for (i = 0; i < num; i++)
		{
			if (*head == list[i])
			{
				num = _free(list, num);
				*head = NULL;
				return (num);
			}
		}
		num++;
		list = realloc(list, num * sizeof(listint_t *));
		if (list == NULL)
			exit(98);

		list[num - 1] = *head;
		next = (*head)->next;
		free(*head);
		*head = next;
	}
	_free(list, num);
	return (num);
}
