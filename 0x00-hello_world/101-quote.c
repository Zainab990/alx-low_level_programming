#include <unistd.h>

#define MESSAGE "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n"

/**
* main - Entry point
*
* Descriptio: C program print without put of printf
*
* Return: 1 (Success)
*/

int main(void)
{
	write(2, MESSAGE, sizeof(MESSAGE) - 1);

	return (1);
}
