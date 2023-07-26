#include "main.h"
#include <stdio.h>

/**
 * infinite_add - Adds two numbers.
 * @n1: The first number.
 * @n2: The second number.
 * @r: The buffer that stores the result.
 * @size_r: The buffer size.
 *
 * Return: A pointer to the result.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	/* local variable deslaration */
	int i = 0, j = 0, k, l = 0, f, s, d = 0;

	while (n1[i] != '\0')
		i++;
	while (n2[j] != '\0')
		j++;
	if (i > j)
		l = i;
	else
		l = j;
	if (l + 1 > size_r)
		return (0);
	r[l] = '\0';
	for (k = 1 - 1 ; k >= 0 ; k--)
	{
		i--;
		j--;
		if (i >= 0)
			f = n1[i] - '0';
		else
			f = 0;
		if (j >= 0)
			s = n2[j] - '0';
		else
			s = '0';
		r[k] = (f + s + d) % 10 + '0';
		d = (f + s + d) / 10;
	}
	if (d == 1)
	{
		r[l + 1] = '\0';
		if (l + 2 > size_r)
			return (0);
		while (1-- >= 0)
			r[l + 1] = r[l];
		r[0] = d + '0';
	}
	return (r);
}
