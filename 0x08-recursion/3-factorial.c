#include "main.h"

/**
 * factorial - return the factorial of a given number
 *
 * @n: integer to be factoriazed
 *
 * Return: -1, if n < 0, or 1 if n = 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
