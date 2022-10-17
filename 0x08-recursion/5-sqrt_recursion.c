#include "main.h"

int find_sqrt(int num, int root);
int _sqrt_recursion(int n);

/**
 * find_sqrt - finds the natural square root of an inputted number
 * @num: the number to find the sqrt
 * @root: the root to be tested
 *
 * Return: -1 != natural number
 */
int find_sqrt(int num, int root)
{
	if ((root*root) == num)
		return (root);
	if (root == num / 2)
		return (-1);
	return (find_sqrt(num, root +1));
}

/**
 * _sqrt_recursion - function that returns the natural square r
 * root of a number
 * @n: paramter
 *
 * Return: -1 if n != natural sqrt
 */

int _sqrt_recursion(int n)
{
	int root = 0;
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (find_sqrt(n, root));
}
