#include"main.h"

/**
 * int _isalpha - function that check for alphabet character
 *
 * @c: is the int that will be use for th argument of the function
 * Return: 0
*/

int _isalpha(int c)
{
	int c;

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
