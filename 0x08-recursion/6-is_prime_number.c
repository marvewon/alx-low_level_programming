#include "main.h"

/**
 * is_prime_number - function that returns 1 if the input is a prime no
 * @n: integer
 *
 * Return: return 1 if n is a prime no, else return 0
 */
int is_prime_number(int n)
{
	int m = n / 2;

	for (i =2; i <= m; i++)
	{
		if (n % 2 == 0)
		{
			return (1);
		}
		else
			return (0);
	}
}
