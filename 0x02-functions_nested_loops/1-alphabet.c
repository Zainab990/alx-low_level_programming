#include "main.h"

/**
 * print_alphabet - Prints the lowercase alphabet followed by a new line
 *
 * This function prints the lowercase alphabet using the _putchar function.
 */
void print_alphabet(void)

{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		{
		_putchar(letter);
		}
	_putchar('\n');
}
