#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, and then in uppercase,
 *        followed by a new line.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lowercase = 'a';
	char uppercase = 'A';

	/* Print lowercase letters */
	while (lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase++;
	}

	/* Print uppercase letters */
	while (uppercase <= 'Z')
	{
		putchar(uppercase);
		uppercase++;
	}

	/* Print new line */
	putchar('\n');

	return (0);
}

