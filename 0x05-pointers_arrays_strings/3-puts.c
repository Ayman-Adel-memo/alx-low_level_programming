#include "main.h"
/**
 * _puts - Prints a s
 * @str: string.
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
