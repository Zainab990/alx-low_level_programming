#include <unistd.h>

/**
 * _putchar-writing the characters to std
 * @c: character to be print
 *
 * Return: 1 (Success)
 * on error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
