#include "main.h"
/**
 * main - prints _putchar followed by a new line
 *
 * Return: 0 on success
 */

int main(void)
{
	char str[] = "_putchar";
	int ch;

	for (ch = 0; ch < 8; ch++)
		_putchar(str[ch]);
	_putchar('\n');
	return (0);
}
