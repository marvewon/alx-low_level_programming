#include "main.h"

/**
 * _pow_recursion - returns the value of @x raised to the power of @y
 *
 * @x: number
 * @y: the powe to raised @n to
 *
 * Return: the vlaue of @x to the @y power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * (_power_recursion(x, y - 1)));
}
