#include <stdio.h>

/**
 * main - entry point
 *
 * Descraption: s
 *
 * Return: 0 (success)
 */

int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar((num % 10) + '0');
		if (num == 9)
			continue;

		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
