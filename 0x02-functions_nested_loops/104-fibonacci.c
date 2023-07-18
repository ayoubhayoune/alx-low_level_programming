#include <stdio.h>

#define FIBO_SIZE 100

/**
 * print_fibonacci - Prints the first 98 Fibonacci numbers
 */
void print_fibonacci(void)
{
	unsigned int fibo[FIBO_SIZE];
	unsigned int carry, i, j;

	/* Initialize array with zeros */
	for (i = 0; i < FIBO_SIZE; i++)
		fibo[i] = 0;

	fibo[FIBO_SIZE - 1] = 1; /* First Fibonacci number */
	carry = 0;

	for (i = 2; i <= 98; i++)
	{
		for (j = FIBO_SIZE - 1; j > 0; j--)
		{
			fibo[j] = fibo[j] + fibo[j - 1] + carry;
			carry = fibo[j] / 10;
			fibo[j] %= 10;
		}
	}

	/* Find the first non-zero digit */
	for (i = 0; i < FIBO_SIZE; i++)
	{
		if (fibo[i] != 0)
			break;
	}

	/* Print the Fibonacci numbers */
	printf("%d", fibo[i]);

	for (j = i + 1; j < FIBO_SIZE; j++)
		printf(", %d", fibo[j]);

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
