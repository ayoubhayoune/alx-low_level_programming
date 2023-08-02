#include "main.h"

/**
 * _strlen - Calculates the length of a string.
 *
 * @s: The string to calculate the length of.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s)
	{
		len++;
		s++;
	}

	return (len);
}

/**
 * check - Recursive function to check if a string is a palindrome.
 *
 * @s: The string to check.
 * @start: The starting index.
 * @end: The ending index.
 * @mod: The length modulo 2.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int check(char *s, int start, int end, int mod)
{
	if (start >= end)
		return (1);

	if (s[start] != s[end])
		return (0);

	return (check(s, start + 1, end - 1, mod));
}

/**
 * last_index - Finds the last index of a string.
 *
 * @s: The string to find the last index of.
 *
 * Return: The last index of the string.
 */
int last_index(char *s)
{
	int n = 0;

	if (*s > '\0')
		n += last_index(s + 1) + 1;
	return (n);
}

/**
 * is_palindrome - Checks if a string is a palindrome using recursion.
 *
 * @s: The string to check.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
int end = last_index(s);
return (check(s, 0, end - 1, end % 2));
}
