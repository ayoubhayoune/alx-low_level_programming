#include "main.h"

/**
 * main - Entry point of the program
 *
 * Description: Prints the string "_putchar" followed by a new line
 * using the _putchar function
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char *str = "_putchar\n";
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}

	return (0);
}
