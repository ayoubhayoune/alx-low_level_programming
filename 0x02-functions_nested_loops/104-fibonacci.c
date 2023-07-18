#include <stdio.h>

/**
 * print_fibonacci - Prints the first 98 Fibonacci numbers
 */
void print_fibonacci(void)
{
	unsigned int i, count;
	unsigned int a = 1, b = 2, next;

	printf("%u, %u", a, b);

	for (count = 2; count < 98; count++)
	{
		next = a + b;
		printf(", %u", next);
		a = b;
		b = next;
	}

	printf("\n");
}

/**
 * main - Entry point of the program
 *
 * Return: Always 0
 */
int main(void)
{
	print_fibonacci();
	return (0);
}
