#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible different combinations of two digits.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int tensDigit = 0;
	int onesDigit;

	while (tensDigit <= 8)
	{
		onesDigit = tensDigit + 1;

		while (onesDigit <= 9)
		{
			putchar(tensDigit + '0');
			putchar(onesDigit + '0');

			if (tensDigit != 8 || onesDigit != 9)
			{
				putchar(',');
				putchar(' ');
			}

			onesDigit++;
		}

		tensDigit++;
	}

	putchar('\n');

	return (0);
}
