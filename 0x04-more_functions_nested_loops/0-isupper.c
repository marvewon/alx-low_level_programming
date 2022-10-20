#include"main.h"

/**
 * _isupper - function to checks for uppercase char
 * @c: function parameter
 *
 * Return: 1 if c is upper
 * 	   else 0
 */
int _isupper(int c)
{
	if ( c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
