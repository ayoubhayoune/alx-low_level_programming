#include "main.h"

/**
 * _atoi - Convert a string to an integer.
 * @s: The string to convert.
 *
 * Return: The integer value of the converted string.
 */
int _atoi(char *s)
{
	int sign = 1; /* Represents the sign of the number (positive by default) */
	int result = 0;
	int i = 0;
	int foundDigit = 0;

	do	{
	if (s[i] == '-')
		sign *= -1;
	else if (s[i] >= '0' && s[i] <= '9')
	{
		result = result * 10 + (s[i] - '0');
		foundDigit = 1;
	}
	else if (foundDigit)
		break;
	i++;
	} while (s[i]);

	return (result * sign);
}
