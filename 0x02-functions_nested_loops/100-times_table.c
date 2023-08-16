#include "main.h"
#include <stdio.h>

/**
 * print_times_table - Prints the n times table
 * @n: The number for which the times table will be printed
 */

void print_times_table(int n)
{
	if (n < 0 || n > 15)
	return;

	for (int i = 0; i <= n; i++)
	{
	for (int j = 0; j <= n; j++)
	{
		int product = i * j;

		if (j == 0)
		{
		printf("%d", product);
		}
		else
		{
		printf(",%4d", product);
		}
	}
	printf("\n");
	}
}
