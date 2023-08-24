#include <stdio.h>
#include "lists.h"

/**
 * _strlen - Returns the length of a string.
 * @s: The string whose length to check.
 *
 * Return: Integer length of string.
 */
int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);

	while (*s++)
		i++;

	return (i);
}

/**
 * print_list - Prints all elements of a list_t list.
 * @h: A pointer to the head of the list_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
	if (h->str == NULL)
		printf("[0] (nil)\n");
	else
		printf("[%u] %s\n", _strlen(h->str), h->str);

		count++;
		h = h->next;
	}

	return (count);
}

