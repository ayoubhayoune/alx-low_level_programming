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
	int len1 = 0, len2 = 0, carry = 0, sum;
	int i, j;

	while (n1[len1] != '\0')
		len1++;
	while (n2[len2] != '\0')
		len2++;

	if (len1 > size_r - 1 || len2 > size_r - 1)
		return (0);

	i = len1 - 1;
	j = len2 - 1;
	r[size_r - 1] = '\0';

	while (i >= 0 || j >= 0 || carry)
	{
		sum = carry;
		if (i >= 0)
			sum += n1[i] - '0';
		if (j >= 0)
			sum += n2[j] - '0';

		r[size_r - 2] = sum % 10 + '0';
		carry = sum / 10;
		i--;
		j--;
		size_r--;
	}

	if (r[0] == '0')
		return (r + 1);
	else
		return (r);
}
