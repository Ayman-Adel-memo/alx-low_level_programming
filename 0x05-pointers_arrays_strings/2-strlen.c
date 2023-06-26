#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: str
 *
 * Return: length.
 */
int _strlen(char *s)
{
	size_t len = 0;

	while (*s++)
		len++;

	return (len);
}
