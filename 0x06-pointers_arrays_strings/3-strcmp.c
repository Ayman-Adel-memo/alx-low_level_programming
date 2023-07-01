#include "main.h"
/**
 * _strcmp - sdsd
 *
 * @s1: sd
 * @s2: sd
 *
 * Return: ds
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
