#include "main.h"

/**
 * argstostr - Concatenates all the arguments of a program.
 * @ac: The number of arguments
 * @av: An array of strings containing the arguments
 *
 * Return: A pointer to a new string, or NULL on failure
 */
char *argstostr(int ac, char **av)
{
	char *concat;
	int total_length = 0;
	int i, j, k = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			total_length++;
		total_length++;
	}

	concat = malloc((total_length + 1) * sizeof(char));

	if (concat == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			concat[k] = av[i][j];
			k++;
		}
		concat[k] = '\n';
		k++;
	}
	concat[k] = '\0';

	return (concat);
}
