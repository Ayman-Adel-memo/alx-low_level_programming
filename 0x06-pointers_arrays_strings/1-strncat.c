#include "main.h"

/**
 * _strncat - sdsd
 *
 * @dest: sd
 * @src: ds
 * @n: dssffd
 *
 * Return: sd
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int m = 0;

	while (dest[i++])
		m++;

	for (i = 0; src[i] && i < n; i++)
		dest[m++] = src[i];

	return (dest);
}
