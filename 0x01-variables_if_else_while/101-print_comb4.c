#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible different combinations of three digits.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int hundredsDigit = 0;
	int tensDigit;
	int onesDigit;

	while (hundredsDigit <= 7)
	{
		tensDigit = hundredsDigit + 1;

		while (tensDigit <= 8)
		{
			onesDigit = tensDigit + 1;

			while (onesDigit <= 9)
			{
				putchar(hundredsDigit + '0');
				putchar(tensDigit + '0');
				putchar(onesDigit + '0');

				if (hundredsDigit != 7 || tensDigit != 8 || onesDigit != 9)
				{
					putchar(',');
					putchar(' ');
				}

				onesDigit++;
			}

			tensDigit++;
		}

		hundredsDigit++;
	}

	putchar('\n');

	return (0);
}
