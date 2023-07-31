#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: Pointer to the string to search.
 * @accept: Pointer to the string containing accepted characters.
 *
 * Return: The number of bytes in the initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int found = 0;

	while (*s && !found)
	{
		char *a = accept;

		while (*a)
		{
			if (*s == *a)
			{
				count++;
				found = 1;
				break;
			}
			a++;
		}

		if (found)
			found = 0;
		else
			return (count);

		s++;
	}

	return (count);
}
