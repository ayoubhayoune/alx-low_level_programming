#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long int a = 1, b = 2, next, sum = 0;
	int count;

	printf("%lu, %lu", a, b);

	for (count = 3; count <= 98; count++)
	{
		next = a + b;
		if (next > 4000000)
			break;

		if (next % 2 == 0)
			sum += next;

		printf(", %lu", next);
		a = b;
		b = next;
	}

	printf("\nSum of even-valued terms: %lu\n", sum);

	return (0);
}
