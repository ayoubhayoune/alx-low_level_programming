#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be printed in binary.
 */
void print_binary(unsigned long int n)
{
	int bit = sizeof(n) * 8;
	int printed = 0;

	while (bit > 0)
	{
		if (n & (1L << (--bit)))
		{
			_putchar('1');
			printed = 1;
		}
		else if (printed)
			_putchar('0');
	}

	if (!printed)
		_putchar('0');
}
