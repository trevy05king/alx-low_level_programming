#include "main.h"
/**
 * main - prints _putchar followed by a new line
 *
 * Return: 0 on success
 */

void print_alphabet(void)
{
	int ch;

	for (ch = "a"; ch <= "z"; ch++)
		_putchar(ch);
	_putchar('\n');
	return (0);
}
