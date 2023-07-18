#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase
 *
 * Description: Uses _putchar function to print each lowercase letter
 * of the alphabet, followed by a new line
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}

	_putchar('\n');
}
