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
	int i = 0, j = 0, k = 0, l = 0, f = 0, s = 0, d = 0, carry = 0, sum;

	/* Calculate lengths of n1 and n2 */
	while (n1[i] != '\0')
		i++;
	while (n2[j] != '\0')
		j++;

	/* Check if the result fits in the buffer */
	if (i > size_r - 1 || j > size_r - 1)
		return (0);

	k = i - 1;
	l = j - 1;
	r[size_r - 1] = '\0';

	/* Perform addition digit by digit and consider carry */
	while (k >= 0 || l >= 0 || carry)
	{
		sum = carry;
		if (k >= 0)
			sum += n1[k] - '0';
		if (l >= 0)
			sum += n2[l] - '0';

		r[size_r - 2] = sum % 10 + '0'; /* Store the digit */
		carry = sum / 10;
		k--;
		l--;
		size_r--;
	}

	/* Remove leading zeros if any */
	if (r[0] == '0')
		return (r + 1);
	else
		return (r);
}
