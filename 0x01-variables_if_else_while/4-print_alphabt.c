#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: a program that prints the alphabet in lowercas
 *
 * Return: 0 (Success)
 */

int main(void)

{
	char letter = 'a';

	while (letter <= 'z')
	{
		if (letter != 'e' && letter != 'q')
		{
			putchar(letter);
		}

		letter++;
	}

	putchar('\n');

	return (0);
}
