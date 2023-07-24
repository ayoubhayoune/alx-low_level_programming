#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i, sum, target;
	char password[100];

	srand(time(NULL));

	target = 2772; /* The target sum of the password */

	i = 0;
	sum = 0;

	while (sum < target - 122)
	{
		password[i] = rand() % 94 + 33;
		sum += password[i];
		i++;
	}

	password[i] = target - sum;
	password[i + 1] = '\0';

	printf("%s\n", password);

	return (0);
}
