#include"main.h"

/**
 * _isdigit - a function that check for a 0 digit through 9
 * @c: The variable to be use in the function argument and to be tested
 *
 * Return: variable 1 if c is a digit otherwise return 0
*/
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
		return (0);
}
