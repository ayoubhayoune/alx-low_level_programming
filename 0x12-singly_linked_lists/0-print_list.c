#include "lists.h"

/**
 * _strlen - Calculates the length of a string.
 * @str: The input string.
 *
 * Return: The length of the string.
 */
int _strlen(char *str)
{
	unsigned int len = 0;

	while (str[len])
		len++;

	return (len);
}

/**
 * print_list - Prints elements of a linked list.
 * @h: A pointer to the first node of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("[%u] %s\n", str_len(h->str), h->str ? h->str : "(nil)");
			h = h->next;
			count++;
	}

	return (count);
}
