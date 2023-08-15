#include <unistd.h>

/**
 * _putchar - Writes a character to the standard output
 * @c: The character to write
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}

/**
 * print_alphabet - Prints the lowercase alphabet followed by a new line
 */
void print_alphabet(void)
{
    char letter = 'a';

    while (letter <= 'z')
    {
        _putchar(letter);
        letter++;
    }
    _putchar('\n');
}

int main(void)
{
    print_alphabet();
    return 0;
}
