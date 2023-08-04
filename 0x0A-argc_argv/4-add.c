#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_positive_number - Checks if a string is a positive number
 * @str: The string to check
 *
 * Return: 1 if @str is a positive number, 0 otherwise
 */
int is_positive_number(char *str)
{
	while (*str != '\0')
	{
		if (!isdigit(*str))
			return (0);
		str++;
	}
	return (1);
}

/**
 * main - Entry point
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (is_positive_number(argv[i]))
			sum += atoi(argv[i]);
		else
		{
			printf("Error\n");
			return (1);
		}
	}

	printf("%d\n", sum);

	return (0);
}
