#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0
 */
int main(void)
{
	long int num1 = 1, num2 = 2, next, sum = 0;

	while (num1 <= 4000000)
	{
		if (num1 % 2 == 0)
			sum += num1;

		next = num1 + num2;
		num1 = num2;
		num2 = next;
	}

	printf("%ld\n", sum);

	return (0);
}
