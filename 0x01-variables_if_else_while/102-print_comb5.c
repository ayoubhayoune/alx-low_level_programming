#include <stdio.h>


/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of two two-digit numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num1Tens, num1Ones, num2Tens, num2Ones;

	for (num1Tens = 0; num1Tens <= 9; num1Tens++)
	{
		for (num1Ones = 0; num1Ones <= 9; num1Ones++)
		{
			for (num2Tens = 0; num2Tens <= 9; num2Tens++)
			{
				for (num2Ones = 0; num2Ones <= 9; num2Ones++)
				{
					if ((num1Tens < num2Tens) ||
					   (num1Tens == num2Tens && num1Ones < num2Ones))
					{
						putchar(num1Tens + '0');
						putchar(num1Ones + '0');
						putchar(' ');
						putchar(num2Tens + '0');
						putchar(num2Ones + '0');

						if (!(num1Tens == 9 && num1Ones == 8 &&
						     num2Tens == 9 && num2Ones == 9))
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
