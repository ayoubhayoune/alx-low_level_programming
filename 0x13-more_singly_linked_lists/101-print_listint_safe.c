#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc_list - Reallocates memory for an array of pointers to nodes.
 * @old_list: Pointer to the old list.
 * @size: Size of the new list.
 * @new_node: Pointer to the new node to add.
 *
 * Return: Pointer to the new list.
 */
const listint_t **_realloc_list(const listint_t **old_list,
					size_t size, const listint_t *new_node)
{
	const listint_t **new_list;
	size_t i;

	new_list = malloc(size * sizeof(listint_t *));
	if (new_list == NULL)
	{
		free(old_list);
		exit(98);
	}

	for (i = 0; i < size - 1; i++)
		new_list[i] = old_list[i];

	new_list[i] = new_node;
	free(old_list);

	return (new_list);
}

/**
 * print_listint_safe - Prints a listint_t linked list safely.
 * @head: Pointer to the start of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t num = 0;
	const listint_t **node_list = NULL;

	while (head != NULL)
	{
		for (size_t i = 0; i < num; i++)
		{
			if (head == node_list[i])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(node_list);
				return (num);
			}
		}

		num++;
		node_list = _realloc_list(node_list, num, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}

	free(node_list);
	return (num);
}
