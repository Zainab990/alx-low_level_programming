#include <stdio.h>

/**
 * main - Entry point
 *
 * This program computes and prints the sum of all the multiples of 3 or 5
 * below 1024, followed by a new line.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int limit = 1024;
	int sum = 0;

	for (int i = 1; i < limit; i++)
	{
	if (i % 3 == 0 || i % 5 == 0)
	{
		sum += i;
	}
	}

	printf("Sum of multiples of 3 or 5 below 1024: %d\n", sum);

	return (0);
}
