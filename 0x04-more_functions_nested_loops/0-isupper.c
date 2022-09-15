#include"main.h"

/**
 * _isupper - a function that check for upper case character
 * @c: character to be use as function arguement and to be tested as well
 * Return: 1 if character is uppercase otherwise return 0
*/
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
