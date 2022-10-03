#include<unistd.h>

/**
 * _putchar - write a character c to the stdout
 * @c: The character to print
 *
 * Return: On sucess 1
 * error on failure -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
