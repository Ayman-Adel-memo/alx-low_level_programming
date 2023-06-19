#include <stdio.h>

/**
 * main - entry point
 *
 * Descraption: fkghf
 *
 * Return: 0 (success)
 */

int main(void)
{
	char letter;
	int n;

	for (n = 0; n <= 9; n++)
		putchar((n % 10) + '0');

	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);

	putchar('\n');

		return (0);
}
