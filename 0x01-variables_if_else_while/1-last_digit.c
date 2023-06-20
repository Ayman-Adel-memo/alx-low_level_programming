#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - entry point
 *
 * Descraption: sdgh
 *
 * Return: 0 (success)
 */
int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;
	if (m > 5)
	{ printf("Last digit of %d is %d and is greater than 5\n", n, m);
	}
	else if (m == 0)
	{ printf("Last digit of %d is %d and is 0\n", n, m);
	}
	else if (m < 6)
	{ printf("Last digit of %d is %d and is less than 6 and not 0\n", n, m);
	}
	return (0);
}