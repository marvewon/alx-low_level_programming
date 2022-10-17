#include "main.h"

/**
 * _strlen_recursion - function that retuns the length of a string
 * @s: arugment ponter to fill the memeory
 *
 * Return: Always (0)
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		_strlen_recursion(s + 1);
		putchar(*s);
	}
}
