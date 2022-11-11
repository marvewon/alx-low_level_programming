#include "main.h"

/**
 * main - program that prints all arguments it recievs
 *
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: always
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s \n", argv[i]);
	}
	return (0);
}
