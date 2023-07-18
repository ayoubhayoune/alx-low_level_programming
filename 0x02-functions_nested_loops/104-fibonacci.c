
/**
 * main - Entry point
 *
 * Description: Prints the first 98 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long long int fib1 = 1, fib2 = 2, fib_sum;
	int count;

	printf("%llu, %llu", fib1, fib2);

	for (count = 3; count <= 98; count++)
	{
		fib_sum = fib1 + fib2;
		printf(", %llu", fib_sum);

		fib1 = fib2;
		fib2 = fib_sum;
	}

	printf("\n");

	return (0);
}
