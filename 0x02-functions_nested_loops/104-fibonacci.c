#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned int a = 1, b = 2, next;
	int count;

	printf("%u, %u", a, b);

	for (count = 3; count <= 98; count++)
	{
		next = a + b;
		printf(", %u", next);
		a = b;
		b = next;
	}

	printf("\n");

	return (0);
}
