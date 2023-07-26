#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: Pointer to the input string.
 *
 * Return: Pointer to the modified string.
 */
char *cap_string(char *str)
{
	int i = 0;

	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] = str[i] - 'a' + 'A';

	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
		    str[i] == ',' || str[i] == ';' || str[i] == '.' ||
		    str[i] == '!' || str[i] == '?' || str[i] == '"' ||
		    str[i] == '(' || str[i] == ')' || str[i] == '{' ||
		    str[i] == '}')
		{
			i++;
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 'a' + 'A';
		}
		else
		{
			i++;
		}
	}

	return (str);
}
