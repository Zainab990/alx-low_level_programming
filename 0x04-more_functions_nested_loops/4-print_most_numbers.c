#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * print_most_numbers - print numbers from 0 to 9 excluding 2 and 4
 *
 * Return: (0) success
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
	if (i != 2 && i != 4)
	{
	putchar(i + '0');
	}

	putchar('\n');
}

int main(void)
{
	print_most_numbers();
	return (0);
}
