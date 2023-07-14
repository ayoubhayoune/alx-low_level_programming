#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all numbers of base 16 in lowercase.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number = 0;
	char hexDigits[] = "0123456789abcdef";

	while (number < 16)
	{
		putchar(hexDigits[number]);
		number++;
	}

	putchar('\n');

	return (0);
}
