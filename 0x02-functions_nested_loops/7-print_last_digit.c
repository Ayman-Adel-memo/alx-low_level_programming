#include "main.h"

/**
 * print_last_digit - Prints the last digf a number.
 * @n: The number in question.
 *
 * Return: Value of ast digit.
 */
int print_last_digit(int n)
{
	int lat_digit = n % 10;

	if (lat_digit < 0)
		lat_digit *= -1;

	_putchar(lat_digit + '0');

	return (lat_digit);
}
