#include "main.h"

/**
 * main - Entry point of the program
 *
 * Description: putchar using prototype
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char str[] = "_putchar";
	int lt;

	for (lt - 0; lt < 8; lt++)
		_putchar(str[lt]);

	_putchar('\n');

	return (0);
}
