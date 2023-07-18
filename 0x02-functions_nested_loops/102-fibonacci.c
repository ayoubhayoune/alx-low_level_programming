#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	long int num1 = 1, num2 = 2, next;

	printf("%ld, %ld", num1, num2);

	for (i = 3; i <= 50; i++)
	{
		next = num1 + num2;
		printf(", %ld", next);

		num1 = num2;
		num2 = next;
	}

	printf("\n");

	return (0);
}
