#include "main.h"

/**
 * main - Entry point
 *
 * Description: _putchar - print_alphabet
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */



/**
 * print_alphabet - Prints the lowercase alphabet followed by a new line
 *
 * Description: This function prints the lowercase alphabet using _putchar function.
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
