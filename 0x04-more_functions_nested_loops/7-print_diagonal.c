#include "main.h"

/**
 * print_diagonal - draws a diagonal line in the terminal.
 * @n: the number of times the character '\' should be printed
 */
void print_diagonal(int n)
{
	int postn, spaces;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (postn = 1; postn <= n; postn++)
		{
			for (spaces = 1; spaces < postn; spaces++)
				_putchar(' ');
			_putchar('\\'); /* is equal to '/' char */
			_putchar('\n');
		}
	}
}
