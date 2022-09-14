#include"main.h"
#include <stdio.h>

/**
 * _abs  - function to print the absolute value of an integer
 * @c: is the int variable to be use as the argument of the function
 * Return: alwasy 0
*/
int _abs(int c)
{
	if (c > 0 || c == 0)
	{
		return (c);
	}
	else
		return (c * -1);
}
