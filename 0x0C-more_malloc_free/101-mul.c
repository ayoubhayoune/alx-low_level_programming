#include <stdio.h>
#include "main.h"
#include <stdlib.h>

int _putchar(char c);
void print_number(char *num);
int is_digit(char c);
char *multiply(char *num1, char *num2);

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
	printf("Error\n");
	exit(98);
	}

	char *num1 = argv[1];
	char *num2 = argv[2];

	for (int i = 0; num1[i]; i++)
	{
	if (!is_digit(num1[i]))
	{
		printf("Error\n");
		exit(98);
	}
	}

	for (int i = 0; num2[i]; i++)
	{
	if (!is_digit(num2[i]))
	{
		printf("Error\n");
		exit(98);
	}
	}

	char *result = multiply(num1, num2);

	print_number(result);
	printf("\n");
	free(result);

	return (0);
}

int is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

void print_number(char *num)
{
	int i = 0;

	while (num[i] == '0' && num[i + 1] != '\0')
	i++;
	while (num[i])
	{
	_putchar(num[i]);
	i++;
	}
}

char *multiply(char *num1, char *num2)
{
	int len1 = 0, len2 = 0, i, j, carry, product;
	char *result;

	while (num1[len1])
	len1++;
	while (num2[len2])
	len2++;

	result = malloc(sizeof(char) * (len1 + len2 + 1));

	if (result == NULL)
	exit(98);

	for (i = 0; i < len1 + len2; i++)
	result[i] = '0';

	for (i = len1 - 1; i >= 0; i--)
	{
	carry = 0;
	for (j = len2 - 1; j >= 0; j--)
	{
		product = (num1[i] - '0') * (num2[j] - '0') + (result[i + j + 1] - '0') + carry;
		carry = product / 10;
	result[i + j + 1] = (product % 10) + '0';
	}
	result[i + j + 1] = (carry % 10) + '0';
	}

	return (result);
}

