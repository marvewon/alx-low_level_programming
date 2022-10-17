#include "main.h"

/**
 * factorial - a function that returns the factorial of a given number
 * @n: function parameter
 *
 * Return: -1 if n is < 0 with error else success
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else 
		return (n * factorial(n - 1));
}
