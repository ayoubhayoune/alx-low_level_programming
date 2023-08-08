#include "main.h"

/**
 * word_count - Counts the number of words in a string.
 * @str: The input string
 *
 * Return: The number of words
 */
int word_count(char *str)
{
	int count = 0;
	int in_word = 0;
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
			in_word = 0;
		}
		else if (in_word == 0)
		{
			count++;
			in_word = 1;
		}
	}

	return (count);
}

/**
 * allocate_words - Allocates memory for an array of words.
 * @words: The array to be allocated
 * @wc: The number of words
 * @str: The input string
 *
 * Return: 1 on success, 0 on failure
 */
int allocate_words(char **words, int wc, char *str)
{
	int i, j, k = 0;

	for (i = 0; i < wc; i++)
	{
		while (str[k] == ' ')
			k++;

		int word_len = 0;

		while (str[k + word_len] != ' ' && str[k + word_len] != '\0')
			word_len++;

		words[i] = malloc((word_len + 1) * sizeof(char));
		if (words[i] == NULL)
			return (0);

		for (j = 0; j < word_len; j++, k++)
			words[i][j] = str[k];

		words[i][j] = '\0';
	}

	return (1);
}

/**
 * strtow - Splits a string into words.
 * @str: The input string
 *
 * Return: A pointer to an array of strings, or NULL on failure
 */
char **strtow(char *str)
{
	char **words;
	int wc, i, k = 0;

	if (str == NULL || *str == '\0')
		return (NULL);

	wc = word_count(str);

	if (wc == 0)
		return (NULL);

	words = malloc((wc + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	if (!allocate_words(words, wc, str))
	{
		for (i = 0; i < wc; i++)
			free(words[i]);
		free(words);
		return (NULL);
	}

	words[wc] = NULL;

	return (words);
}
