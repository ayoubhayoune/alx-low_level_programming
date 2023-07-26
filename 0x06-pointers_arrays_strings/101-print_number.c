#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 */
void print_number(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	int reversedNum = 0;
	int lastDigit;

	while (n != 0)
	{
		lastDigit = n % 10;
		reversedNum = reversedNum * 10 + lastDigit;
		n /= 10;
	}

	while (reversedNum != 0)
	{
		lastDigit = reversedNum % 10;
		_putchar(lastDigit + '0');
		reversedNum /= 10;
	}
}
