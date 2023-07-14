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
	int firstDigit;
	int secondDigit;

	for (firstDigit = 0; firstDigit <= 99; firstDigit++)
	{
		for (secondDigit = firstDigit + 1; secondDigit <= 99; secondDigit++)
		{
			putchar((firstDigit / 10) + '0');
			putchar((firstDigit % 10) + '0');
			putchar(' ');
			putchar((secondDigit / 10) + '0');
			putchar((secondDigit % 10) + '0');

			if (!(firstDigit == 98 && secondDigit == 99))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}

