#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long int num1 = 1, num2 = 2, next;
	int count;

	printf("%lu, %lu", num1, num2);

	for (count = 3; count <= 98; count++)
	{
		next = num1 + num2;
		printf(", %lu", next);
		num1 = num2;
		num2 = next;
	}

	printf("\n");

	return (0);
}
