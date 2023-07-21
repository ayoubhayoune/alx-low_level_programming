#include "main.h"

/**
 * print_number - prints an integer
 *
 * @n: The integer to print
*/
void print_number(int n)
{
	unsigned int num = n;

	/*first check if its negative*/
	if (n < 0)
	{
		_putchar('-');
		num = num;
	}

	/*print the first few digits*/
	_putchar((num % 10) + 48);
}
