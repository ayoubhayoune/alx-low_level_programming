#include "main.h"
#include <stdio.h>

/**
 * isPrintableASCII - Determines if n is a printable ASCII char.
 * @n: Integer to be checked.
 *
 * Return: 1 if true, 0 if false.
 */
int isPrintableASCII(int n)
{
	return (n >= 32 && n <= 126);
}

/**
 * printHexes - Prints hex values for string b in formatted form.
 * @b: String to print.
 * @start: Starting position.
 * @end: Ending position.
 */
void printHexes(char *b, int start, int end)
{
	int i = 0;

	while (i < 10)
	{
		if (i < end)
			printf("%02x", *(b + start + i));
		else
			printf("  ");

		if (i & 1)
			printf(" ");
		i++;
	}
}

/**
 * printASCII - Prints ASCII values for string b formatted to replace
 *              nonprintable chars with '.'.
 * @b: String to print.
 * @start: Starting position.
 * @end: Ending position.
 */
void printASCII(char *b, int start, int end)
{
	int ch, i = 0;

	while (i < end)
	{
		ch = *(b + i + start);
		if (!isPrintableASCII(ch))
			ch = '.';
		printf("%c", ch);
		i++;
	}
}

/**
 * print_buffer - Prints a buffer.
 * @b: String.
 * @size: Size of buffer.
 */
void print_buffer(char *b, int size)
{
	int start, end;

	if (size > 0)
	{
		for (start = 0; start < size; start += 10)
		{
			end = (size - start < 10) ? size - start : 10;
			printf("%08x: ", start);
			printHexes(b, start, end);
			printASCII(b, start, end);
			printf("\n");
		}
	}
	else
	{
		printf("\n");
	}
}
