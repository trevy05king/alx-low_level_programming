#include "main.h"
/**
 * main - prints _putchar followed by a new line
 *
 * Return: 0 on success
 */

int main(void)
{
	int ch;

	for (ch = "a"; ch <= "z"; ch++)
		_putchar(ch);
	_putchar('\n');
	return (0);
}
