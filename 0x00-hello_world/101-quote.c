#include <unistd.h>
#define STDERR 2

/**
 * main - Entry point
 *
 * Return: Always 1 (Error)
 */
int main(void)
{
    const char *str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    ssize_t len = 0;

    while (str[len])
        len++;

    if (write(STDERR, str, len) != len)
        return (1);

    return (1);
}

